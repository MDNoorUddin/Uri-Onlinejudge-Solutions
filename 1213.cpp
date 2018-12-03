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

int main()
{
    //freopen("c.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        int div=0;
        int count=0;
        int mod=0;
        while(true)
        {
            mod=(mod*10)+1;
            count++;
            mod=mod%n;
            if(!mod)break;
        }
        cout<<count<<endl;
    }
}
