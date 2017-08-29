#include <iostream>

using namespace std;

int main() {

   for(int i=1,j=60;;i+=3,j-=5)
   {
       cout<<"I="<<i<<" J="<<j<<endl;
       if(j==0)
       break;
   }

    return 0;
}
