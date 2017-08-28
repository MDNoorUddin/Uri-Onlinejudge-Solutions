#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int small=a[0];
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            index=i;
        }
    }
    cout<<index+1<<endl;
}
