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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        for(int i=str.length()-1;i>=0;i--)
        {
            if(str[i]>=97&&str[i]<=122)
            {
                cout<<str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
