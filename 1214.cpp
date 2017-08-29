#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        int x[1000];
        int sum=0,count=0;
        double average,r;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            sum+=x[i];

        }
        average=sum/n;
        for(int i=0;i<n;i++)
        {
            if(x[i]>average)
                count++;
        }
        r=(count*100)/(n*1.0);
        printf("%.3lf",r);
        cout<<"%\n";
    }
    return 0;
}
