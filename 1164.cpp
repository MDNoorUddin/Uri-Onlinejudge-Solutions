#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,sum=0,m;
    while(t>0)
    {
        cin>>x;
        m=x/2;
        for(int i=1;i<=m;i++)
        {
            if(x%i==0)
            sum=sum+i;
        }
        if(sum==x)
        cout<<x<<" eh perfeito\n";
        else
        cout<<x<<" nao eh perfeito\n";
        t--;
        sum=0;
    }
}
