#include <iostream>
 
using namespace std;
 
int main() {

     double x[100];
     double z;
     cin>>z;
     for(int i=0;i<100;i++)
     {
         x[i]=z;
         z=z/2.0000;
     }
     for(int i=0;i<100;i++)
     {
         
         printf("N[%d] = %.4lf\n",i,x[i]);
     }
     
 
    return 0;
}
