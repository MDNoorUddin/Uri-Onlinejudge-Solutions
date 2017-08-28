#include <iostream>
 
using namespace std;
 
int main() {

     int t;
     cin>>t;
     while(t--)
     {
         string str;
         cin>>str;
         string c;
         for(int i=str.length()-1,j=0;i>=0;i--,j++)
         c[j]=str[i];
         if(c==str)
         cout<<"N\n";
         else
         cout<<"Y\n";
     }
 
    return 0;
}
