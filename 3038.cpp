#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
#define mn -
#define mod %
#define E =
#define EE ==
//int mx=9999999;
/**  '' "\n" x ^ **/

void yes()
{
    cout<<"YES\n";
}

void no()
{
    cout<<"NO\n";
}

vector<vector<int>> a(10000+1);

int n,m;

vector<bool> v(10000+1);
int h=0;
int count=0;
vector<int> dis(10000+1);
int mx=0;
void dfs(int x,int e)
{
    //cout<<x;ps();
    v[x]=true;
    for(int i=0;i<a[x].size();i++)
    {

        if(!v[a[x][i]]){
            dis[a[x][i]]=dis[x]+1;
            if(dis[a[x][i]]>mx)
            h=a[x][i];
            mx=max(dis[a[x][i]],mx);
            dfs(a[x][i],x);
        }

    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    while(getline(cin,str))
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='@')cout<<'a';
            else if(str[i]=='&')cout<<'e';
            else if(str[i]=='!')cout<<'i';
            else if(str[i]=='*')cout<<'o';
            else if(str[i]=='#')cout<<'u';
            else cout<<str[i];
        }
        cout<<endl;
    }
}
