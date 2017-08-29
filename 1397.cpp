#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int sum1=0,sum2=0;
        int a,b;
        while(n-->0)
        {
            cin>>a>>b;
            if(a>b)
            sum1+=1;
            if(b>a)
            sum2+=1;
        }
        cout<<sum1<<" "<<sum2<<endl;
        cin>>n;
    }
}
