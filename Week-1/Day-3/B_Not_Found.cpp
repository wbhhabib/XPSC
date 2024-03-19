#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    string ss;
    int i = 97;
    set<int> s;
    cin >> ss;
    int len = ss.length();
    for(int i=0; i<len; i++) s.insert(ss[i]);
    for(auto u : s)
    {
        if(u!=i) break;
        i++;
    }
    if(i!=123) cout << char(i);
    else cout << "None";
    return 0;
}