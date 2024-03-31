#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string arr[n];
        map<string,int>m;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            int ans = 0;
            string s1 = "";
            for(int j=0;j<arr[i].size();j++)
            {
                s1 = s1 + arr[i][j];
                string s2 = "";
 
                for(int k=j+1;k<arr[i].size();k++){
 
                    s2 = s2 + arr[i][k];
                }
 
                if(m[s1] && m[s2]){
                    ans = 1;
                    break;
                }
            }
            cout << ans ;
        }
        cout << endl;
    }
}