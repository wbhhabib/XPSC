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
        string a, b;
        cin >> a >> b;
        map<char,int>m={{'S',1},{'M',2},{'L',3}};
        int al=a.size(), bl=b.size();
        if(a==b)cout << '=' << endl;
        else if(m[a[al-1]]<m[b[bl-1]])cout << '<' << endl;
        else if(m[a[al-1]]>m[b[bl-1]])cout << '>' << endl;
        else if(m[a[al-1]]==m[b[bl-1]] && a[al-1]=='S')
        {
            if(al>bl)cout << '<'<< endl;
            else cout << '>'<< endl;
        }
        else if(m[a[al-1]]==m[b[bl-1]] && a[al-1]=='L')
        {
            if(al>bl)cout << '>'<< endl;
            else cout << '<'<< endl;
        }
    }
    return 0;
}