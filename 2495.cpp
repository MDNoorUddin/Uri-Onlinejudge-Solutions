#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
while(cin>>t){
    int a[t];
    for(int i=0;i<t-1;i++)
    cin>>a[i];
    sort(a,a+t-1);
    bool c=false;
    for(int i=0;i<t-1;i++)
    { if(a[i]!=i+1){
        cout<<i+1<<endl; c=true; break;} } 
        if(!c)
 cout<<t<<endl;}
return 0;
}
