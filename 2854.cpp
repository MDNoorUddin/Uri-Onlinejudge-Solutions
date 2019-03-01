#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
vector<vector<int> > a(301);
vector<bool> v(301);
vector<int> ans;
void dfs(int n)
{
    if(v[n])return;
    v[n]=true;
    for(auto e:a[n])
    {
        dfs(e);
    }
    ans.push_back(n);
    return;
}

int main()
{
    int n,m;
    int u,vi;
    while(cin>>m>>n)
    {
        map<string,int> mp;
        fill(v.begin(),v.end(),false);
        string x,y,z;
        int i=1;
        while(n--)
        {
            cin>>x>>y>>z;
            if(!mp[x])mp[x]=i++;
            if(!mp[z])mp[z]=i++;
            a[mp[x]].push_back(mp[z]);
            a[mp[z]].push_back(mp[x]);
        }
        //cout<<i<<endl;
        int count=0;
        for(int ii=1;ii<i;ii++){
        if(!v[ii]){
            dfs(ii);
            count++;
         }
        }
        //ans.clear();
        cout<<count<<endl;
    }

}
