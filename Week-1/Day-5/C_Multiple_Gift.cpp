#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    ll x,y;
    cin >> x >> y;
    ll count=0;
    while(x<=y)
    {
        x = x*2;
        count++;
    }
    cout << count;
    return 0;
}