#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long
#define nl <<"\n"

int main()
{
    int t;
    cin >> t;
    string s = "Timur";
    sort(s.begin(), s.end());
    while(t--)
    {
        int n;
        cin >> n;
        string ss;
        cin >> ss;
        int ssl = ss.length();
        if(ssl!=5)cout << "NO" << endl;
        else
        {
            sort(ss.begin(), ss.end());
            if(ss==s)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}