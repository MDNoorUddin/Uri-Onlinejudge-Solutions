#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    while(cin>>n)
    {
        if(n==-1)break;
        int sum=0;
        int _100=0;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            sum+=p;
            if(sum%100==0)_100++;
        }
        cout<<_100<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    while(cin>>n)
    {
        if(n==-1)break;
        int sum=0;
        int _100=0;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            sum+=p;
            if(sum%100==0)_100++;
        }
        cout<<_100<<endl;
    }
}
