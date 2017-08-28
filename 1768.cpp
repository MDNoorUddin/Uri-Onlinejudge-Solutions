#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int x=n/2+1;
        for(int i=1;i<=x;i++)
        {
            //printing space
            for(int j=i;j<=n/2;j++)
                cout<<" ";
            int p=2*i-1;
            for(int s=1;s<=p;s++)
                cout<<"*";
            cout<<endl;
        }
        int count=1;
        while(count<=2){
        for(int j=count;j<=n/2;j++)
                cout<<" ";
        int p=2*count-1;
        for(int s=1;s<=p;s++)
                cout<<"*";
            cout<<endl;
            count++;
    }
    cout<<endl;
    }
    return 0;
}
