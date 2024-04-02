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
        ll n;
        cin >> n;
        ll sum=0, i=0,c=0;

        for(ll j=0; j<n; j++)
        {
            ll a;
            cin >> a;
            sum+=abs(a);
            if(a<0)i--;
            else if(a>0)
            {
                if(i<0)c++;
                i=0;
            }
        }
        if(i<0)c++;
        cout << sum << " " << c << endl;
    }
    return 0;
}