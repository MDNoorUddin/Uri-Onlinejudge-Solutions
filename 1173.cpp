#include <iostream>
 
using namespace std;
 
int main() {
     int x[10];
     int z;
     cin>>z;
     for(int i=0;i<10;i++)
     {
         x[i]=z;
         z=z*2;
     }
     for(int i=0;i<10;i++)
     {
         
         printf("N[%d] = %d\n",i,x[i]);
     }
     
 
    return 0;
}
