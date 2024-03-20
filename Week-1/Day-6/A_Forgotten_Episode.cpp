#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int>v(n+1,0);
    for(int i=0; i<n-1; i++)
    {
        int a;
        cin >> a;
        v[a]++;
    }
    for(int i=1; i<n+1; i++)
    {
        if(v[i]==0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}