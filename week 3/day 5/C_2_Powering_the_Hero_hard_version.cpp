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
        ll n;
        cin >> n;
        priority_queue<ll> pq;
        ll sum = 0;
        for(ll i=0; i<n; i++)
        {
            ll a; cin >> a;
            if(a!=0)
            {
                pq.push(a);
            }
            else{
                if(!pq.empty())
                {
                    sum+=pq.top();
                    pq.pop();
                }
            }
        }

        cout << sum << endl;
    }
    return 0;
}