#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==0||n==1)return false;
    else if(n==2)return true;
    else if(n%2==0)return false;
    for(int i=3;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(isPrime(x))cout<<x<<" eh primo\n";
        else cout<<x<<" nao eh primo\n";
    }
    return 0;
}
