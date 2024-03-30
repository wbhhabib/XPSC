#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long
#define nl <<"\n"

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll m,n;
        cin >> m>>n;
        ll arr[m][n];
        for(ll i=0; i<m; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll max = INT_MIN;
        for(ll i=0; i<m; i++)
        {
            for(ll j=0; j<n; j++)
            {
                ll s = arr[i][j];
                ll l=i-1,r=j+1;
                while((l>=0 && l<m ) && (r>=0 && r<n ))
                {
                    s+=arr[l][r];
                    l--;r++;
                }
                l=i-1,r=j-1;
                while((l>=0 && l<m ) && (r>=0 && r<n ))
                {
                    s+=arr[l][r];
                    l--;r--;
                }
                l=i+1,r=j+1;
                while((l>=0 && l<m ) && (r>=0 && r<n ))
                {
                    s+=arr[l][r];
                    l++;r++;
                }
                l=i+1,r=j-1;
                while((l>=0 && l<m ) && (r>=0 && r<n ))
                {
                    s+=arr[l][r];
                    l++;r--;
                }
                if(max<s) max = s;
            }
        }
        cout << max << endl;
    }
    return 0;
}