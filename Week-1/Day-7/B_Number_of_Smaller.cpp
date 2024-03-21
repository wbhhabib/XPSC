#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int m,n;
    cin >> m >> n;
    int a[m], b[n];
    for(int i=0; i<m; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    int r=0, l=0;
    ll sum=0;
    while(l<n)
    {
        while(r<m && a[r]<b[l])
        {
            sum++;
            r++;
        }
        l++;
        cout << sum << " ";
    }
    return 0;
}