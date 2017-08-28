#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin>>t){
        
        float A[t];
     for(int i=1;i<=t;i++){
        float a,b;
            cin>>a>>b;
        float m=b/a;
            A[i-1]=m;
        }
        for(int i=0;i<t;i++)
        {
            if(i==0)
                cout<<1<<endl;
             else{
            bool x=false;
               for(int j=0;j<i;j++)
                {
                if(A[i]<=A[j]){ x=true; break;}
                 }
                if(!x)
                  cout<<i+1<<endl; }
        }
        }
   
return 0;
}
