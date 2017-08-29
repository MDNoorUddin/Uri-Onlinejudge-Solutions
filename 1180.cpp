#include <iostream>
 
using namespace std;
 
int main() {

     int n,l,p;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     l=a[0];
     p=0;
     for(int i=1;i<n;i++)
     {
         if(a[i]<l)
         {
             p=i;
             l=a[i];
             
         }
     }
     printf("Menor valor: %d\n",l);
     printf("Posicao: %d\n",p);
     
 
    return 0;
}
