#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,min,max;
   while(cin>>t>>min>>max){
             int count=0;
             while(t--){
                  int a;
                  cin>>a;
                  if(a>=min&&a<=max) count++;
           }
          cout<<count<<endl;
     }
   return 0;
}
