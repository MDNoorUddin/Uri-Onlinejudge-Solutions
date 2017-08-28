#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        float deg;
        cin>>str;
        cin>>deg;
        float a[7],sum=0;
        for(int i=0;i<7;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        sort(a,a+7);
        sum=sum-a[0];
        sum=sum-a[6];
        sum=sum*deg;
        cout<<str<<" ";
        printf("%.2f\n",sum);

    }
    return 0;
}
