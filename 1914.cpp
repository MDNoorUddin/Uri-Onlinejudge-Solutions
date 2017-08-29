#include <iostream>
 
using namespace std;
 
int main() {

     string str[4];
     int t;
     int m,n;
     cin>>t;
     while(t-->0)
     {
         cin>>str[0]>>str[1]>>str[2]>>str[3];
         cin>>m>>n;
         m=m+n;
         if(m%2==0)
         {
             if(str[1]=="PAR")
             cout<<str[0]<<endl;
             else
             cout<<str[2]<<endl;
         }
         if(m%2!=0)
         {
             if(str[1]=="IMPAR")
             cout<<str[0]<<endl;
             else
             cout<<str[2]<<endl;
         }
     }
 
    return 0;
}
