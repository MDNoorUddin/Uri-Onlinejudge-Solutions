#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //freopen("uri.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll x;
        cin>>x;
        x=(sqrt(1+8*x)-1)/2;
        cout<<x<<endl;
    }
    return 0;
}
