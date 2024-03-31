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
        int n ;
        cin >> n;
        int arr[n][n-1];
        map<int, int>m;
        int p,q;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>arr[i][j];
                if(j==0)
                {
                    m[arr[i][j]]++;
                    if(i==0) p=i;
                    else if(i==1) q=i;
                    else
                    {
                        if(m[arr[i][j]]<2 && j==0)
                        {
                            p=i;
                            q=i;
                        }
                    }
                }

            }
        }
        auto it1 = m.begin();
        auto it2 = m.end();it2--;
        int s1 = it1->second, s2=it2->second, f1=it1->first,f2=it2->first;
        // if(s1<s2)
        // {
        //     if(arr[p][0]==f1)
        //     {
        //         cout << f2<<" ";
        //         for(int i=0; i<n-1; i++)
        //         {
        //             cout << arr[p][i] << " ";
        //         }
        //     }
        //     else
        //     {
        //         cout << f2<<" ";
        //         for(int i=0; i<n-1; i++)
        //         {
        //             cout << arr[q][i] << " ";
        //         }
        //     }
        // }
        // else
        // {
        //     if(arr[p][0]==f2)
        //     {
        //         cout << f1<<" ";
        //         for(int i=0; i<n-1; i++)
        //         {
        //             cout << arr[p][i] << " ";
        //         }
        //     }
        //     else
        //     {
        //         cout << f1<<" ";
        //         for(int i=0; i<n-1; i++)
        //         {
        //             cout << arr[q][i] << " ";
        //         }
        //     }
        // }
        // cout << endl;
        if(s1>s2)
        {
            cout << f1 << " ";
            for(int i=0; i<n; i++)
            {
                if(arr[i][0]==f2)
                {
                    for(int j=0; j<n-1; j++)
                    {
                        cout << arr[i][j] << " ";
                    }
                    break;
                }
            }
        }
        else
        {
            cout << f2 << " ";
            for(int i=0; i<n; i++)
            {
                if(arr[i][0]==f1)
                {
                    for(int j=0; j<n-1; j++)
                    {
                        cout << arr[i][j] << " ";
                    }
                    break;
                }
            }
        }

        cout << endl;
    }
    return 0;
}