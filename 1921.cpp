#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int se=0;
    long long sum=0;
    for(int i=4;i<=n;i++)
    {
        if(i==4)se=2;
        else se++;
        sum+=se;
    }
    cout<<sum<<endl;
}
