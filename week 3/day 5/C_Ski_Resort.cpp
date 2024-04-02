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
        ll n,k,q;
        cin >> n>> k >> q;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        ll i=0,tot=0, sum=0;
        while(i<=n)
        {
            if(arr[i]<=q && i<n)
            {
                tot++;
            }
            else
            {
                ll m = tot-(k-1), n=tot-(tot-1);
                if(n==m)sum++;
                else
                {
                    if(m>0 && n>0)
                    {
                        ll ans = ((n+m)*(m-(n-1)))/2;
                        if(ans>=0) sum+=ans;
                    }
                }
                tot=0;
            }
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}

