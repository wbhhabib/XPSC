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
        int n,q;
        cin >> n >> q;
        ll arr[n+1];
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            sum+=a;
            arr[i]=sum;
        }
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}