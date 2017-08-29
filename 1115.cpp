#include <iostream>
 
using namespace std;
 
int main() {
 
   int a,b;
   while(1)
   {
       cin>>a>>b;
       if(a==0||b==0)
       break;
       if(a>0&&b>0)
       cout<<"primeiro\n";
       if(a>0&&b<0)
       cout<<"quarto\n";
       if(a<0&&b<0)
       cout<<"terceiro\n";
        if(a<0&&b>0)
       cout<<"segundo\n";
       
   }
 
    return 0;
}
