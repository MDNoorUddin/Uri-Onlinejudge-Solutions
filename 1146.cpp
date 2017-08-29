#include <iostream>
 
using namespace std;
 
int main() {
     int z;
     while(1)
     {
         cin>>z;
         if(z==0)
         break;
         for(int i=1;i<=z;i++)
         {
             cout<<i;
             if(i==z)
             {
                 cout<<endl;
             }
             else
             {
                 cout<<" ";
             }
         }
     }
 
    return 0;
}
