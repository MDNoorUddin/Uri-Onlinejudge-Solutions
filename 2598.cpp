#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("c.txt","w",stdout);
int a;
cin>>a;
while(a--){
  int m,n;
  cin>>m>>n;
  if(m<n)cout<<1<<endl;
  else if(m%n==0)
    cout<<m/n<<endl;
  else
    cout<<(m/n)+1<<endl;
 }
return 0;
}
