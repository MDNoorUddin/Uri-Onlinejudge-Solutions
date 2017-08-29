#include <iostream>
 
using namespace std;
 
int main() {

     double sum=0.0;
     for(int i=1;i<=100;i++)
     {
         sum=sum+(1.0/i);
     }
     printf("%.2lf\n",sum);
 
    return 0;
}
