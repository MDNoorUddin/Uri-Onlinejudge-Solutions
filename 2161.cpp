#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double x=0.0;
    int n;
    cin>>n;
    if(n==1)
        x=0.1666666667;
    if(n==0)
        x=0.0000000000;
    for(int i=2;i<=n;i++)
    {
        if(i==2)
        {
            x=6.0+(1.00/6.00);
            x=1.0/x;
        }
        else
        {
            x=6.00+x;
            x=1.0/x;
        }

    }
    x=x+3.00;
    printf("%.10lf\n",x);
    return 0;
}
