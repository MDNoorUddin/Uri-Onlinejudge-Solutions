#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==0)cout<<"Fib(0) = 0\n";
        else if(n==1)cout<<"Fib(1) = 1\n";
        else{
        ll pred=0;
        ll before=1;
        ll k;
        for(int i=2;i<=n;i++)
        {
            k=pred+before;
            pred=before;
            before=k;
        }
        printf("Fib(%d) = ",n);
        cout<<k<<endl;
        }
    }
}
