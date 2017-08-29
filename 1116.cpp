#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    double x,y,z;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        cin>>x>>y;
        if(y==0)
        {

            cout<<"divisao impossivel\n";
        }
        else
        {
            z=(double)x/y;

            printf("%.1lf\n",z);
        }

    }
    return 0;
}
