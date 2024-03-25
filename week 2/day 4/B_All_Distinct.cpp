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
        int n;
        cin >> n;
        set<int>v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            v.insert(a);
        }
        int sl = v.size();
        if((n-sl)==0 || (n-sl)%2==0) cout << sl << endl;
        else cout << sl-1 << endl;
    }
    return 0;
}