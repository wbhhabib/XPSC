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
        map<int, int>m;
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int c=0;
        for(int j=n-1; j>=0; j--)
        {
            if(m[arr[j]]==0)
            {
                m[arr[j]]++;
                c++;
            }
            else break;
        }

        cout << n-c  << endl;
    }
    return 0;
}