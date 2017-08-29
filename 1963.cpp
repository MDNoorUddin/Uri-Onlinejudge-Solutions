#include <iostream>
 
using namespace std;
 
int main() {
 
   double old,neww;
   cin>>old>>neww;
   neww=neww-old;
   old=(neww*100)/old;
   printf("%.2lf%\n",old);
 
    return 0;
}
