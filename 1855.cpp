#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps(n) cout << n<<" ";
#define sf(n) cin >> n
#define in(n) for (int i = 0; i < n; i++)
#define vi vector<ll>
#define vp vector<pair<int, int>>
#define graph vector<vector<int>>
#define vs vector<string>
#define sort(a) sort(a.begin(), a.end())
#define MOD 1000000007
#define eql =
#define leql <=
#define geql >=
#define eqleql ==
#define pls +
#define mns -
/**  '' "\n" ^  some keys are broken of my keyboard. :( . So I used macros. :(*/

int count=0;
int x;
int u,v,n,m;
vector<string> str(100);
int dis[100][100];
vector<int> ans;

void dfs(int i,int j,int dir)
{
    if(i eqleql n || i eqleql mns 1 || j eqleql m || j eqleql mns 1)
    {
        pf('!');
        exit(0);
    }
    if(dis[i][j])
    {
        pf('!');
        exit(0);
    }
    dis[i][j] eql 1;
    if(str[i][j] eqleql '*')
    {
        pf('*');
        exit(0);
    }
    if(str[i][j] eqleql '.')
    {
        if(dir eqleql 1)
        {
            dfs(i pls 1,j,1);
        }
       if(dir eqleql 3)
        {
            dfs(i mns 1,j,3);
        }
        if(dir eqleql 2)
        {
            dfs(i,j pls 1,2);
        }
        if(dir eqleql 4)
        {
            dfs(i,j mns 1,4);
        }
    }
    if(str[i][j] eqleql '>')
    {
        dfs(i,j pls 1, 2);
    }
  if(str[i][j] eqleql '<')
  {
      dfs(i,j mns 1, 4);
  }
  if(str[i][j] eqleql 'v')
  {
      dfs(i pls 1,j , 1);
  }
  if(str[i][j] eqleql '^')
  {
      dfs(i mns 1,j, 3);
  }
}
int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  sf(m);sf(n);
  in(n)
  {
      sf(str[i]);
  }
  if(str[0][0] eqleql '.')
  {
      pf('!');
      return 0;
  }
  if(str[0][0] eqleql '*')
  {
      pf('*');
      return 0;
  }
  if(str[0][0] eqleql '>')
    x eql 2;
  if(str[0][0] eqleql '<')
    x eql 4;
  if(str[0][0] eqleql 'v')
    x eql 1;
  if(str[0][0] eqleql '^')
    x eql 3;
  dfs(0,0,x);
  pf('!');
}
