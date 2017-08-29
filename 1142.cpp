#include <iostream>

using namespace std;

int main() {

     int level,l=1;
     cin>>level;
     for(int i=1;i<=level;i++)
     {
         for(int j=1;j<=4;j++,l++)
         {
             if(j%4==0)
             cout<<"PUM\n";

         else
         {
             cout<<l<<" ";
         }
     }
     }

    return 0;
}
