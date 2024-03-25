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
        int n;
        cin >> n;
        map<int , int>m;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            m[a]++;
        }
        int max = INT_MIN;
        for(auto i= m.begin(); i!= m.end(); i++)
        {
            if(max<i->second) max=i->second;
        }
        int aa = n-max;
        int c = 0;
        while(max<n)
        {
            c++;
            max = max+max;
        }
        cout << c+aa << endl;
    }
    return 0;
}