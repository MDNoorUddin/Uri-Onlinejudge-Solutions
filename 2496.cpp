#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string d;
        cin>>d;
        int l=d.length();
        string c=d;
        sort(c.begin(),c.end());
        int count=0;
        for(int i=0;i<l;i++){
       if(c[i]!=d[i]) 
            count++;
        if(count>2)
          break;
    }
        if(count==2) cout<<"There are the chance.\n";
        else cout<<"There aren't the chance.\n";
     }
    return 0;
}
