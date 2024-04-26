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
        ll a, b, c, f=0,s=0;
        cin >> a >> b >> c;
        f = abs(a-1);
        s = abs(b-c)+abs(1-c);
        if(f<s)cout << 1 << endl;
        else if(f>s)cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}