#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int n;
    cin >> n;
    int l=0;
    int m=n;
    while(m)
    {
        m=m/10;
        l++;
    }
    for(int i=0; i<4-l; i++)
    {
        cout << 0;
    }
    if(4-l!=4) cout << n;
    return 0;
}