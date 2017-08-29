#include <iostream>
 
using namespace std;
 
int main() {

     int t;
     cin>>t;
     int x;
     while(t>0)
     {
         cin>>x;
         if(x%2==0)
         cout<<0<<endl;
         else
         cout<<1<<endl;
         t--;
     }
 
    return 0;
}
