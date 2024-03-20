#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        map<string,int>ms;
        int n;
        cin >> n;
        string arr1[n];
        string arr2[n];
        string arr3[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr1[i];
            ms[arr1[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            cin >> arr2[i];
            ms[arr2[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            cin >> arr3[i];
            ms[arr3[i]]++;
        }
        int a=0,b=0,c=0;
        for(int i=0; i<n; i++)
        {
            if(ms[arr1[i]]==1) a=a+3;
            else if(ms[arr1[i]]==2) a=a+1;

            if(ms[arr2[i]]==1) b=b+3;
            else if(ms[arr2[i]]==2) b=b+1;

            if(ms[arr3[i]]==1) c=c+3;
            else if(ms[arr3[i]]==2) c=c+1;
        }

        cout << a <<" "<< b<<" "<< c<< endl;
    }
    return 0;
}