#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[3],x,y,z;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    x=a[0];
    y=a[1];
    z=a[2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++){
        if(a[j+1]<a[j])
        {
            int temp;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    printf("\n");
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    return 0;

}
