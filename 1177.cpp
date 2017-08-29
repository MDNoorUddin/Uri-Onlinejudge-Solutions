#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int t;
    cin>>t;
    for(int i=0,j=0;i<1000;i++,j++)
    {
        if(j>=t)
        j=0;
        a[i]=j;
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}
