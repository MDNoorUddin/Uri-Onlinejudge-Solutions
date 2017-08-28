#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
while(a--){
  string p;
  cin>>p;
  cout<<"k";
  int count=0;
  int pos;
  for(int i=1;i<p.length();i++){
    if(p[i]!='a')
      {
       pos=i;
       break;
       }
    else count++;
   }
   for(int i=pos+3;;i++){
      if(p[i]!='a')
         break;
      for(int j=0;j<count;j++){
      cout<<"a";
    }
   }
   cout<<endl;
 }
return 0;
}
