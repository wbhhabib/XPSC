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
        int n,q,l,r,k;
        cin >> n >> q;
        ll arr[n];
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            sum+=a;
            arr[i]=sum;
        }
        for(int i=0; i<q; i++)
        {
            cin >> l>> r>> k;
            ll sum2 = (r-l+1)*k;
            if(l-2>=0)sum2+=arr[l-2]+(arr[n-1]-arr[r-1]);
            else sum2+=(arr[n-1]-arr[r-1]);

            if(sum2%2!=0)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}