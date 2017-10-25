#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    if(a%2==0)return false;
    for(int i=3;i<=sqrt(a);i=i+2)
    {
        if(a%i==0)return false;
    }
    return true;
}
int main()
{
    long long a;
    cin>>a;
    long long v=0;
    int count=0;
    long long i=a;
    while(count<10)
    {
        if(isPrime(i))
        {
            count++;
            v+=i;
        }
        i++;
    }
    int hour=60000000/v;
    int day=hour/24;
    cout<<v<<" km/h\n";
    printf("%d h / %d d\n",hour,day);
    return 0;
}
