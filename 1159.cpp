#include <iostream>
 
using namespace std;
 
int main() {

     int x;
     while(true)
     {
         cin>>x;
         if(x==0)
         break;
         int sum=0,c=0;
         for(int i=x;;i++)
         {
             if(c==5)
             break;
             if(i%2==0)
             {
                 sum=sum+i;
                 c++;
             }
         }
         cout<<sum<<endl;
     }
 
    return 0;
}
