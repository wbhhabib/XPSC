#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long
#define nl <<"\n"

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<string> vs;

        for(int i=0; i<n; i++)
        {
            string ss;
            cin >> ss;
            vs.push_back(ss);
        }

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int sum =0;
                for(int k=0; k<m; k++)
                {
                    int a= abs(vs[j][k]-vs[i][k]);
                    sum = sum + a;
                }
                pq.push(sum);
            }
        }
        cout << pq.top()<< endl;
        
    }

    return 0;
}