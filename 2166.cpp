#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double x=0.0;
    int n;
    cin>>n;
    if(n==1)
        x=0.5000000000;
    if(n==0)
        x=0.0000000000;
    for(int i=2;i<=n;i++)
    {
        if(i==2)
        {
            x=2.0+.5;
            x=1.0/x;
        }
        else
        {
            x=2.0+x;
            x=1.0/x;
        }

    }
    x=x+1.00;
    printf("%.10lf\n",x);
    return 0;
}
