#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n)
    {
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        bool find=false;
        int index=0;
        for(int i=0;i<n-1;i=i+2)
        {
            if(a[i]!=a[i+1])
            {
                find=true;
                index=i;
                break;
            }

        }
        if(!find&&a[n-1]!=a[n-2]&&(a[n-2]==a[n-3]))
            index=n-1;
        if(!find&&a[n-1]==a[n-2]&&(a[n-2]==a[n-3]))
            index=n-1;
        cout<<a[index]<<endl;
    }
    return 0;
}
