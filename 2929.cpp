#include<bits/stdc++.h>
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
/**  '' "\n" ^ -  =**/


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    priority_queue<int> q;
    stack<int> s;
    unordered_map<int,int> mp;
    string str;
    int h;
    in(i,n)
    {
        cin>>str;
        if(str.length()==4)
        {
            cin>>h;
            s.push(h);
            mp[h]++;
            q.push(-h);
        }
        else if(str[0]=='P')
        {
            if(s.empty())
            {
                //q.empty();
                cout<<"EMPTY\n";
                continue;
            }
            int tp=s.top();
            mp[tp]=mp[tp] - 1;
            s.pop();
        }
        else
        {
            if(s.empty())
            {
                cout<<"EMPTY\n";
                continue;
            }
            int h=0;
            while(!q.empty())
            {
                int tp=abs(q.top());
                if(mp[tp]>0)
                {
                    h=1;
                    cout<<tp<<endl;
                    break;
                }
                else
                {
                    q.pop();
                }
            }
        }
    }
}
