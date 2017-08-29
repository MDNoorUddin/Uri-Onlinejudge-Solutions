#include <iostream>
 
using namespace std;
 
int main() {
 
 unsigned int X;
 int counter=0;
 cin>>X;
 for(int i=X;;i++)
 {
     if(i%2!=0)
     {
         cout<<i<<endl;
         counter++;
     }
     if(counter==6)
     {
         break;
     }
 }
 
    return 0;
}
