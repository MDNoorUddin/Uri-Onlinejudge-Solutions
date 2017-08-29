#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int X,Y;
    float Z;
    cin>>X>>Y;
    if(X==1)
        Z=Y*4.00;
    if(X==2)
        Z=Y*4.50;
    if(X==3)
        Z=Y*5.00;
    if(X==4)
        Z=Y*2.00;
    if(X==5)
        Z=Y*1.50;
    printf("Total: R$ %.2f\n",Z);
    return 0;
}
