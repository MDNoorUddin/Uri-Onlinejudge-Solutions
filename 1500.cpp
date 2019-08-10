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
#define vs vector<string>
/**  '' "\n" ^ **/


//typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
            // tree_order_statistics_node_update>
//    new_data_set;

ll tre[4*100000+100];
ll lazy[4*100000+100];
ll a[100000+100];

void build(int k,int s,int e)
{
    if(s==e)
    {
        tre[k]=0;
        lazy[k]=0;
        return;
    }
    int mid=(s+e)/2;
    build(2*k,s,mid);
    build(2*k+1,mid+1,e);
    tre[k]=tre[2*k]+tre[2*k+1];
}

void update(int k,ll s,ll e,int l,int r,ll val)
{
    if(lazy[k])
    {
        tre[k]+=(e-s+1)*lazy[k];
        if(s!=e)
        {
            lazy[2*k]+=lazy[k];
            lazy[2*k+1]+=lazy[k];
        }
        lazy[k]=0;
    }
    if(s>r||e<l)
        return;
    if(s>=l&&e<=r)
    {
        tre[k]+=(e-s+1)*val;
        if(s!=e)
        {
            lazy[2*k]+=val;
            lazy[2*k+1]+=val;
        }
        return;
    }
    int mid=(s+e)/2;
    update(2*k,s,mid,l,r,val);
    update(2*k+1,mid+1,e,l,r,val);
    tre[k]=tre[2*k]+tre[2*k+1];
    return;
}

ll search(int k,ll s,ll e,int l,int r)
{
    if(lazy[k])
    {
        tre[k]+=(e-s+1)*lazy[k];
        if(s!=e)
        {
            lazy[2*k]+=lazy[k];
            lazy[2*k+1]+=lazy[k];
        }
        lazy[k]=0;
    }
    if(s>r||e<l)return 0;
    if(s>=l&&e<=r)return tre[k];
    int mid=(s+e)/2;
    return search(2*k,s,mid,l,r)+search(2*k+1,mid+1,e,l,r);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //build(1,1,n);
        for(int i=1;i<=4*n;i++)
        {
            tre[i]=0;
            lazy[i]=0;
        }
        int q;
        cin>>q;
        ll p,Q,r,s;
        while(q--)
        {
            cin>>p>>Q>>r;
            if(p==1)
            {
                cout<<search(1,1,n,Q,r)<<endl;
            }
            else
            {
                cin>>s;
                update(1,1,n,Q,r,s);
            }
        }
    }
}
