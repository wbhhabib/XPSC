#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(c<a && c<b) cout << "No";
    else if(c%a==0 || c%b==0) cout << "Yes";
    else
    {
        int aa= c/a;
        int bb= c/b;
        //cout << aa <<" "<< bb;
        int count=0;
        for(int i=0; i<=aa; i++)
        {
            for(int j=0; j<=bb; j++)
            {
                if(i*a+j*b>c) break;
                if(i*a+j*b==c){
                    count++;
                    break;
                }
            }
            if(count==1)break;
        }

        if(count==0) cout<< "No";
        else cout<< "Yes";
    }
    return 0;
}