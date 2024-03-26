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
        cin>> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>> arr[i];
        }
        for(int i=0; i<n; i++)
        {
            int m;
            cin >> m;
            for(int j=0; j<m; j++)
            {
                char a;
                cin >> a;
                if(a=='U')
                {
                    arr[i]--;
                    if(arr[i]==10) arr[i]=0;
                    if(arr[i]==-1) arr[i]=9;
                }
                else
                {
                    arr[i]++;
                    if(arr[i]==10) arr[i]=0;
                    if(arr[i]==-1) arr[i]=9;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}