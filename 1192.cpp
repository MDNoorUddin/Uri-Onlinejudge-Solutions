#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char x[4];
        int result,r[2];
        cin>>x;
        r[0]=x[0]-48;
        r[1]=x[2]-48;
        if(isupper(x[1]))
            result=r[1]-r[0];
        if(islower(x[1])&&x[0]==x[2])
            result=r[1]*r[0];
        if(isupper(x[1])&&x[0]==x[2])
            result=r[1]*r[0];
        if(islower(x[1])&&x[0]!=x[2])
            result=r[0]+r[1];
            printf("%d\n",result);

    }
    return 0;
}
