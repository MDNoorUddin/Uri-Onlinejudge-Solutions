#include<bits/stdc++.h>
using namespace std;
int fibo(int a,int& call)
{
    int sum1=0;
    call++;
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else
    {
        sum1=fibo(a-1,call)+fibo(a-2,call);
    }
    return sum1;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int sum=0,call=-1;
        sum=fibo(x,call);
        printf("fib(%d) = %d calls = %d\n",x,call,sum);
    }
    return 0;
}

