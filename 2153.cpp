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
/**  '' "\n" ^ **/


typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;


int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  string str;
  while(cin>>str)
  {
      string p=str;
      reverse(p.begin(),p.end());
      string temp;
      int id=str.length();
      for(int i=0,l=p.length()-1;i<p.length();i++,l--)
      {
          temp=temp+p[i];
          string t;
          for(int j=str.length()-1-temp.length(),k=0;j>=0&&k<=i;k++,j--)
          {
              t=t+str[j];
          }
          //cout<<temp;ps();cout<<t<<endl;
          if(temp==t)
            id=l;
      }
      for(int i=0;i<id;i++)
      {
          cout<<str[i];
      }
      cout<<endl;
  }
}
