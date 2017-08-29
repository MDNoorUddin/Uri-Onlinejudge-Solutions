#include <iostream>

using namespace std;

int main() {

   int t;
   while(cin>>t)
   {
       int e=0,f=0,c=0;
       while(t-->0)
       {
           int x;
           string y;
           cin>>x>>y;
           if(y=="EPR")
           e++;
           else if(y=="EHD")
           f++;
           else
           c++;


       }
       cout<<"EPR: "<<e<<endl;
       cout<<"EHD: "<<f<<endl;
       cout<<"INTRUSOS: "<<c<<endl;

   }

    return 0;
}
