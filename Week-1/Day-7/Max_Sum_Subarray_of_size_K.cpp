#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define ll long long

int main()
{
    int N,K;
    cin >> N >> K;
    int Arr[N];
    for(int i=0; i<N; i++)
    {
        cin >> Arr[i];
    }
        int i=0,j=0;
        long long sum1=0, sum2=0;
        while(j<N)
        {
            while(j<K)
            {
                sum1+=Arr[j];
                j++;
            }
            if(sum2<sum1)sum2=sum1;
            if(j<N)
            {
                sum1= (sum1-Arr[i])+Arr[j];
                i++;
                j++;
            }
        }
        cout << max(sum1,sum2);
    return 0;
}