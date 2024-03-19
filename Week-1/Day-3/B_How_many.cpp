#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int s,t;
    cin >> s>> t;
    int lim = max(s,t);
    int c=0;
    for(int i=0; i<=lim; i++)
    {
        for(int j=0; j<=lim; j++)
        {
            for(int k=0; k<=lim; k++)
            {
                if(i+j+k>s && i*j*k>t)
                {
                    break;
                }
                if(i+j+k<=s && i*j*k<=t) c++;
            }
        }
    }

    cout << c;
    return 0;
}