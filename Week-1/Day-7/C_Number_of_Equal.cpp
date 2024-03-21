#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int a,b;
    cin >> a >> b;
    int arr1[a];
    int arr2[b];

    for(int i=0; i<a; i++)
    {
        cin >> arr1[i];
    }
    for(int i=0; i<b; i++)
    {
        cin >> arr2[i];
    }
    int l=0, r=0;
    ll sum=0;
    while(l<a && r<b)
    {
        int cou1 =0, cou2=0, point=arr1[l];

        while(arr1[l]==point && l<a)
        {
            cou1++;
            l++;
        }
        while(arr2[r]<point && r<b)
        {
            r++;
        }
        while(arr2[r]==point && r<b)
        {
            cou2++;
            r++;
        }
        sum+=(1LL*cou1*cou2);
    }
    cout << sum ;
    return 0;
}