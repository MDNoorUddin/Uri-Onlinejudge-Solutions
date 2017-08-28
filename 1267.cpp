#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    while(cin>>n>>d)
    {
        if(n==0&&d==0)
            break;
        int a[d][n];
        for(int i=0;i<d;i++)
        {
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        }
        int sum=0;
        bool x=false;
        int I=0,J=0;
        while(I!=d&&J!=n)
        {
            for(int i=0;i<d;i++)
            {
                sum+=a[i][J];
            }
            if(sum==d)
            {
                x=true;
                break;
            }
            sum=0;
            I++;
            J++;
        }
        if(x)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
