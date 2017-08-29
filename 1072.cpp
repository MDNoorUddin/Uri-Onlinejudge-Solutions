#include<iostream>
using namespace std;
int main()
{
    int t,n;
    int r=0,R=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(n>=10&&n<=20)
        {
            r++;
        }
        else
        R++;
    }
    cout<<r<<" in\n";
    cout<<R<<" out\n";
    return 0;
}
