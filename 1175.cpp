#include <iostream>
#include<stdio.h>
using namespace std;

int main() {

    int n[20],m[20];
    for(int i=0;i<20;i++)
    {
        cin>>n[i];
    }
    for(int i=0,j=19;i<20;i++,j--)
    {
        m[i]=n[j];
    }
    for(int i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,m[i]);
    }

    return 0;
}
