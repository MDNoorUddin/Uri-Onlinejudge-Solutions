#include <iostream>
#include<stdio.h>

using namespace std;

int main() {

     long long int sum1=1,sum2=1,sum=0;
     int a,b;

    while((scanf("%lld%lld",&a,&b))!=EOF)
    {
        if(a==0||a==1)
        sum1=1;
        else
        {
            for(int i=2;i<=a;i++)
            sum1=sum1*i;
        }
         if(b==0||b==1)
        sum2=1;
        else
        {
            for(int i=2;i<=b;i++)
            sum2=sum2*i;
        }
        sum=sum1+sum2;
        cout<<sum<<endl;
        sum1=1;
        sum2=1;
        sum=0;
    }

    return 0;
}
