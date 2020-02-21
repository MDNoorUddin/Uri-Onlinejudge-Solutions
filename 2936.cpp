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
int mx=9999999;
/**  '' "\n" - ^ **/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll sum=225;
    int a[]={300,1500,600,1000,150};
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        sum+=(a[i]*x);
    }
    cout<<sum;
}
