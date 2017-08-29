#include <iostream>
 
using namespace std;
 
int main() {

     int x,y,t;
     cin>>t;
     while(t>0){
         cin>>x>>y;
         int sum=0,c=0;
         for(int i=x;;i++)
         {
             if(c==y)
             break;
             if(i%2!=0)
             {
                 sum=sum+i;
                 c++;
             }
         }
         cout<<sum<<endl;
         t--;
     }
 
    return 0;
}
