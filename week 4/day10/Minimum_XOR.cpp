#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
	    int n;
        cin >> n;
        int arr[n];
        int bitX=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            bitX^=arr[i];
        }
        int ans=bitX;
        for(int i=0; i<n; i++)
        {
            ans=min(ans,(bitX^arr[i]));
        }
        cout << ans << endl;
    }
}
