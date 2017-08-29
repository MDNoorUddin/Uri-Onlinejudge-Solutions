#include <iostream>
 
using namespace std;
 
int main() {
 int a,b,c,d;
 bool x=false,y=false,z=false,k=false,l=false;
 cin>>a>>b>>c>>d;
 if(b>c&&d>a)
 {
     x=true;
 }
 if(c+d>a+b)
 {
     y=true;
 }
 if(c>0&&d>0)
 {
     z=true;
 }
 if(a%2==0)
 {
     k=true;
 }
 if(x&&y&&z&&k)
 {
     l=true;
 }
 if(l)
 {
     cout<<"Valores aceitos\n";
 }
 else
 {
     cout<<"Valores nao aceitos\n";
 }
 return 0;

}
