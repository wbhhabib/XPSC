#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int a ,b;
    cin >> a >> b;
    if(a==b)cout << a+b;
    else
    {
        int p=max(a,b);
        cout << p+p-1;
    }
    return 0;
}