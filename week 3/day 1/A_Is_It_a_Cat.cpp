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
        string s= "meow",s2,s3;
        int n;
        cin >>n >>s2;
        char a,b;
        for(int i=0; i<n; i++)
        {
            a=tolower(s2[i]);
            if(i==0){
                b = a;
                s3+=a;
            }
            else
            {
                if(b!=a)
                {
                    s3+=a;
                    b=a;
                }
            }
        }
        if(s==s3)cout << "YES" << endl;
        else cout << "NO" << endl;

        
    }
    return 0;
}