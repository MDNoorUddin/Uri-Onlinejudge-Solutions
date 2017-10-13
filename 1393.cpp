#include<bits/stdc++.h>
#define  ll long long
using namespace std;

int main()
{
    ll n;
    while(cin>>n&&n)
    {
        ll _0=0,_1=1;
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            ans=_0+_1;
            _0=_1;
            _1=ans;
        }
        printf("%d\n",ans);
    }
    return 0;
}
