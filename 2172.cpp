#include <iostream>
 
using namespace std;
 
int main() {
     int a;
     long long x;
     long long y;
     cin>>a>>x;
     while(a!=0&&x!=0)
     {
         y=x*a;
         cout<<y<<endl;
         cin>>a>>x;
     }
 
    return 0;
}
