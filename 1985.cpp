#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int t;
     cin>>t;
     double sum=0.0;
     while(t-->0)
     {
         int n,m;
         cin>>n>>m;
         if(n==1001)
         sum=sum+(m*1.50);
         if(n==1002)
         sum=sum+(m*2.50);
         if(n==1003)
         sum=sum+(m*3.50);
         if(n==1004)
         sum=sum+(m*4.50);
         if(n==1005)
         sum=sum+(m*5.50);
     }
     printf("%.2lf\n",sum);
 
    return 0;
}
