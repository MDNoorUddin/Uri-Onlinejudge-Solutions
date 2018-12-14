#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<iterator>
#include<set>
#include<queue>
#include<bits/stdc++.h>

using namespace std;

int I=1;
typedef long long ll;

void negabinary(int n)
{
    if(n==0)
    {
        cout<<0<<endl;
        return;
    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    vector<int> a;
    while(n)
    {
        if(n==1)
        {
            a.push_back(1);
            break;
        }
        if(n>0)
        {
            int x=n/(2);
            a.push_back(n%2);
            x=(-1)*x;
            n=x;
        }
        else
        {
            int N=abs(n);
            int x=(N/2);
            if(N%2!=0){
                    a.push_back(1);
                x++;
            }
            else
            {
                a.push_back(0);
            }
            n=x;
        }
    }
    for(int i=a.size()-1;i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<endl;
    return;
}

void interactive()
{
    fflush(stdout);
}

int main()
{
    //freopen("c.txt","w",stdout)
    int n,k;
    while(cin>>n>>k)
    {
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]=a[i]%1000000007;
        }
        sort(a.begin(),a.end(),greater<int>());
        ll sum=0;
        for(int i=0;i<k;i++)
        {
            sum=(sum+a[i])%1000000007;
        }
        cout<<sum<<endl;
    }
    return 0;
}
