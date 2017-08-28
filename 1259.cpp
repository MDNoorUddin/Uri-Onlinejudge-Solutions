#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int o=0,e=0,x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            b[e++]=x;
        }
        else
        {
            a[o++]=x;
        }
    }
    sort(b,b+e);
    sort(a,a+o,greater<int>());
    for(int i=0;i<e;i++)
        cout<<b[i]<<endl;
    for(int i=0;i<o;i++)
        cout<<a[i]<<endl;
    return 0;
}
