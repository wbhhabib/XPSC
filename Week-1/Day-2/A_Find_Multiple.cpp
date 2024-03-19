#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int res=-1;
    for(int i=1; i<=1000; i++)
    {
        int mult = c*i;
        if(mult>1000)
        {
            break;
        }
        if(mult>=a && mult<=b)
        {
            res = mult;
            break;
        }
    }
    cout << res;
    return 0;
}