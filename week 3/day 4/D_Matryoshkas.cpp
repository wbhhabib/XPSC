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
        map<int, int>m;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            m[a]++;
        }
        int t_sum=0, i=0,c=0,prev;
        for (const auto val : m)
        {
            int f= val.first, s=val.second;
            if(c=0){
                i=s;
                prev=f;
                c++;
            }
            else
            {
                if(f-prev==1)
                {
                    if(i>s)
                    {
                        t_sum+= i-s;
                        i=s;
                        prev=f;
                    }
                    else
                    {
                        i=s;
                        prev=f;
                    }
                }
                else
                {
                    t_sum+=i;
                    i=s;
                    prev=f;
                }
            }
        }

        cout << t_sum+i << endl ;
    }
    return 0;
}