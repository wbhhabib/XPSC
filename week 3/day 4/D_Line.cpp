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
        string s ;
        cin >> s;
        vector<ll> v;
        ll i=0, j=n-1,k=n/2;
        while(i<k || j>=k)
        {
            while(s[i]=='R' && i<k-1) i++;
            while(s[j]=='L' && j>k) j--;

            if(s[i]=='L' && s[j]=='R')
            {
                if(((n-1)-i) >= j)
                {
                    v.push_back(i);
                    i++;
                }
                else
                {
                    v.push_back(j);
                    j--;
                }
            }
            else
            {
                if(s[i]=='L' && i<k)
                {
                    v.push_back(i);
                    i++;
                }
                else if(s[j]=='R' && j>=k)
                {
                    v.push_back(j);
                    j--;
                }
                else
                {
                    i++;
                    j--;
                }
            }
        }
        ll sum =0;
        ll vl=v.size();
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='L')sum+=i;
            else sum+=(n-1-i);
        }
        for(int i=0; i<n; i++)
        {
            if(i<vl)
            {
                if(s[v[i]]=='L')
                {
                    sum = (sum-v[i])+(n-v[i]-1);
                }
                else
                {
                    sum = ((sum - (n-1-v[i]))+v[i]);
                }

                cout << sum << " ";
            }
            else cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}