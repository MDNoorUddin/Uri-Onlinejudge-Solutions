#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[j]==a[i])
                {
                    int I=i;
                    for(int k=j+1;k<n;k++)
                    {
                        bool find=false;
                        for(int l=I+1;l<n;l++)
                        {
                            if(b[k]==a[l])
                            {
                                find=true;
                                break;
                            }
                        }
                        if(!find)
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
