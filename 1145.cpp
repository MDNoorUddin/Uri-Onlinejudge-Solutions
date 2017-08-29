#include <iostream>
 
using namespace std;
 
int main() {
     int x,y;
     cin>>x>>y;
     for(int i=1;i<=y;i++)
     {
         cout<<i;
         if(i%x==0)
         cout<<endl;
         else
         cout<<" ";
     }
 
    return 0;
}
