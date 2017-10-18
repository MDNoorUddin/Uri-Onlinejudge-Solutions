#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int count=0;
    for(int i=0;i<n;i++)
    {
        count++;
        if(count==k)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]!=a[j])break;
                count++;
            }
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}
