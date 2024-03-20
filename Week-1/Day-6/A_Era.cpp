#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int newAdded=0;
        for(int i=1; i<=n; i++)
        {
            int a;
            cin >> a;
            if(i+newAdded<a)newAdded = newAdded + (a-(i+newAdded));
        }
        cout<<newAdded << endl; 
    }
    return 0;
}