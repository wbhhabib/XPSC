#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k;
    cin >> n >> k;
    ll arr1[n], arr2[k];
    for(ll i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    for(ll i=0; i<k; i++)
    {
        cin >> arr2[i];
        ll l=0, r=n-1,ans=-1;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(arr1[mid]<=arr2[i])
            {
                ans = mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(ans!=-1)cout << ans+1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}