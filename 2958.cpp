#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
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
/**  '' "\n" ^ - = + **/


typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
                 tree_order_statistics_node_update>
        new_data_set;
#define MAXN   10000001
int spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;

    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
void getFactorization(int n)
{
    int h=n;
    vector<int> f;
    int i=0;
    for (int x = 2; x*x <= n; x++) {
            while (n%spf[x] == 0) {
               f.push_back(spf[x]);
              n /= spf[x];
         }
    }
    if(n>1)
        f.push_back(n);
    if(f.size()<3)
    {
        cout<< "NO\n";
        return;
    }
    vector<int> ans;
    ans.push_back(f[0]);
    int count=1;
    int mul=1;
    for(int i=1;i<f.size();i++)
    {
        count++;
        mul*=f[i];
        if(mul>ans[0])
        {
            break;
        }
    }
    int k=1;
    for(int i=count;i<f.size();i++)
    {
        k*=f[i];
    }
    set<int> s;
    s.insert(ans[0]);
    s.insert(mul);
    s.insert(k);
    //cout<<ans[0];ps();cout<<mul;ps();cout<<k<<endl;
    if(s.size()==3&&ans[0]*mul*k==h&&k!=1){
        cout<< "YES\n";
        cout<<ans[0];ps();cout<<mul;ps();cout<<k<<endl;
        return;
    }
    cout<<"NO\n";

}
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int n,m;
    vector<string> a1,a2;
    cin>>n>>m;
    string str;
    in(i,n)
    {
        in(j,m)
        {
            cin>>str;
            if(str[1]=='V')a1.push_back(str);

            else a2.push_back(str);
        }

    }
    sort(a1.rbegin(),a1.rend());
        sort(a2.rbegin(),a2.rend());
        for(auto o:a1)
            cout<<o<<endl;
        for(auto o:a2)
            cout<<o<<endl;
}
