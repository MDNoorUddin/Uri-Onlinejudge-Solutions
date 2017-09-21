#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    if(number==2)return true;
    else if(number%2==0)return false;
    else{
        for(int i=3;i<=sqrt(number);i+=2)
        {
            if(number%i==0)return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f;
        cin>>f;
        if(isPrime(f))cout<<"Prime\n";
        else cout<<"Not Prime\n";
    }
}
