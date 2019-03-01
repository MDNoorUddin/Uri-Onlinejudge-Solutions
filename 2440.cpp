#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
vector<vector<int> > a(51000);
vector<bool> v(51000);
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

        fill(v.begin(),v.end(),false);
        int x,y,z;
        int i=1;
        while(n--)
        {
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        //cout<<i<<endl;
        int count=0;
        for(int ii=1;ii<=m;ii++){
        if(!v[ii]){
            dfs(ii);
            count++;
         }
        }
        //ans.clear();
        cout<<count<<endl;
    }

}
