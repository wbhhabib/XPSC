#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long
#define nl <<"\n"

int main()
{
    ll n,k;
    cin >> n >> k;
    ll arr1[n];
    for(ll i=0; i<n; i++)
    {
        cin>> arr1[i];
    }
    while(k--)
    {
        ll a;
        cin>> a;
        ll l=0,r=n-1, ans=-1;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(arr1[mid]>=a)
            {
                ans = mid;
                r = mid-1;
            }
            else 
            {
                l = mid+1;
            }
        }
        if(ans!=-1)cout << ans+1<< endl;
        else cout << n+1 << endl;
    }
    return 0;
}