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
        string s,s2;
        cin >> s ;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                int a = ((s[i-2]-'0')*10)+s[i-1]-'0';
                s2+=char(a+96);
                i-=2;
            }
            else 
            {
                s2+= char((s[i]-'0')+96);
            }
        }
        reverse(s2.begin(), s2.end());
        cout << s2 << endl;
    }
    return 0;
}