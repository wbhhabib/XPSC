#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n ;
    string a,b;
    cin >> t;
 
    for(int i=0; i<t; i++)
    {
        int c=0;
        cin >> n >> a>> b;
 
        for(int i=0; i<n; i++)
        {
            if ((a[i] == b[i]) || ((a[i]=='G' || a[i]=='B') && (b[i]=='G' || b[i] =='B')))
            {
                c=0;
            }
            else
            {
                c=1;
                break;
            }
        }
 
        if(c==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}