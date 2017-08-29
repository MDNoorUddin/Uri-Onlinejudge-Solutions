#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double x[100];
     int i;
     for(i=0;i<100;i++)
     {
         scanf("%lf",&x[i]);
     }
     for(i=0;i<100;i++)
     {
         if(x[i]<=10.0)
         printf("A[%d] = %.1lf\n",i,x[i]);
     }
     
 
    return 0;
}
