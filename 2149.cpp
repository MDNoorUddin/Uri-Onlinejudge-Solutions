#include<bits/stdc++.h>
using namespace std;
#define for(i,n) for(i;i<n;i++)
int main()
{
    int n;
    while(cin>>n)
    {
        long long a[100];
        a[0]=0;
        a[1]=1;
        int i=2;
        for(i,n)
        {
            if(i%2==0)
            {
                a[i]=a[i-1]+a[i-2];
            }
            else
            {
                a[i]=a[i-1]*a[i-2];
            }
        }
        cout<<a[n-1]<<endl;

    }
    return 0;
}
