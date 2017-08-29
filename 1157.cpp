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
     cout<<1<<endl;
     for(int i=2;i<=t/2;i++)
     {
         if(t%i==0)
         cout<<i<<endl;
     }
     cout<<t<<endl;
 
    return 0;
}
