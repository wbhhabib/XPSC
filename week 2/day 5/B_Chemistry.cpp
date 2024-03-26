#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,c=0;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int>m;
        for(int i=0; i<n; i++)m[s[i]]++;
        for(auto i=m.begin(); i!=m.end(); i++)
        if(i->second%2!=0)c++;
        c--;
        if(c<=k)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}