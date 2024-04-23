#include<bits/stdc++.h>
using namespace std;
 
int main()
{
     int t;
     cin >> t;
     while(t--)
     {
          string s;
          cin >> s;
          int len = s.length();
          int f = s[0]-96, l=s[len-1]-96,mi=min(f,l), ma=max(f,l),c=0;
          vector<pair<int, int>>v4;
 
          for(int i=0; i<len; i++)
          {
               int a = s[i]-96;
               if(a>=mi && a<=ma)
               {           
                    c++;
                    v4.push_back({a,i+1});
               }
          }
          cout << abs(f-l) << " " << c << endl;
 
               if(f<l)
               {
                    sort(v4.begin(), v4.end());
                    cout << 1 << " ";
                    for(auto val : v4)
                    {
                        if(val.second != 1 && val.second!=len) cout << val.second << " ";
                    }
                    cout << len ;
                    
               }
               else
               {
                    sort(v4.begin(),v4.end(),greater<pair<int,int>>());
                    cout << 1 << " ";
                    for(auto val : v4)
                    {
                        if(val.second != 1 && val.second!=len) cout << val.second << " ";
                    }
                    cout << len << " ";
               }
               cout << endl;
     }
}
 
