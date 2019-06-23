#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

#define pf(n) cout << n << endl
#define ps(n) cout << n<<" ";
#define sf(n) cin >> n
#define in(n) for (int i = 0; i < n; i++)
//#define vi vector<ll>
#define vp vector<pair<int, int>>
#define graph vector<vector<int>>
#define vs vector<string>
//#define sort(a) sort(a.begin(), a.end(),greater<int>())
#define MOD 1000000007
int x,y,u,v,z,count,n,m;
vector<int> ans;
vector<vector<int> > a(30);
vector<int> vi(30);
void dfs(int r,int space)
{
    vi[r]=true;
    for(int i=0;i<a[r].size();i++)
    {

        in(space)cout<<" ";
        cout<<r<<"-"<<a[r][i];
        if(!vi[a[r][i]])cout<<" pathR(G,"<<a[r][i]<<")\n";
        else cout<<endl;
         if(vi[a[r][i]])continue;
         vi[a[r][i]]=1;
        dfs(a[r][i],space+2);
    }
    return;
}
void sieve()
{
    for(int i=0;i<30;i++)
    {
        a[i].clear();
        vi[i]=0;
    }
}
int main()
{
    freopen("c.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    sf(t);
    for(int i=1;i<=t;i++){
    sieve();
    cout<< "Caso "<<i<<":\n";
    sf(n);sf(m);
    in(m)
    {
        sf(u);
        sf(v);
        a[u].push_back(v);
    }
    for(int i=0;i<n;i++){
    sort(a[i].begin(),a[i].end());
    }
    for(int i=0;i<n;i++){
    if(!vi[i]&&!a[i].empty()){
    dfs(i,2);
    cout<<endl;
    }
    }
    }
}

