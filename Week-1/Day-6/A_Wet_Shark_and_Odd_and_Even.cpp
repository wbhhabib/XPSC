#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int n;
    cin >> n;
    ll evenSum=0;
    ll min_N = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >>a;
        evenSum=evenSum+a;
        if(a%2!=0 && a<min_N) min_N = a;

    }
    if(evenSum%2==0) cout << evenSum ;
    else cout << evenSum - min_N;
    return 0;
}