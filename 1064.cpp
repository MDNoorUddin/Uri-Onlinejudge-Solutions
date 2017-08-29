#include <iostream>
 
using namespace std;
 
int main() {
     float x,y=0;
     int c=0;
     for(int i=1;i<=6;i++)
     {
         cin>>x;
         if(x>0)
         {
             y=y+x;
             c++;
         }
     }
     y=y/c;
     cout<<c<<" valores positivos\n";
     printf("%.1f\n",y);
 
    return 0;
}
