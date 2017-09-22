#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==0||n==1)return false;
    if(n==2) return true;
    if(n%2==0)return false;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
bool isSuperPrime(int n)
{
    while(n>=10)
    {
        int s=n%10;
        n/=10;
        if(!isPrime(s))
            return false;
    }
    if(n==2||n==3||n==7||n==5)return true;
    else return false;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(!isPrime(n))cout<<"Nada\n";
        else
        {
            if(isSuperPrime(n))cout<<"Super\n";
            else cout<<"Primo\n";
        }
    }
}
