#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string ss;
        cin >> ss;
        if(c=='g') cout << 0 << endl;
        else
        {
            vector<int> point;
            vector<int> desti;
            for(int i=0; i<n; i++)
            {
                if(ss[i]==c) point.push_back(i+1);
                if(ss[i]=='g') desti.push_back(i+1);
            }
            int poi= point.size();
            int des= desti.size();
            priority_queue<int>pq;
            int res = INT_MIN;
            for(int i=0; i<poi; i++)
            {
                int les = INT_MAX;
                for(int j=0; j<des; j++)
                {
                    int aa = 0;
                    if(point[i]>desti[j])
                    {
                        aa = (n-point[i])+desti[j];
                    }
                    else
                    {
                        aa = desti[j]-point[i];
                    }
                    if(aa<les) les = aa;
                }
                if(res<les) res = les;
            }
            cout << res << endl;
        }
        
    }
    return 0;
}