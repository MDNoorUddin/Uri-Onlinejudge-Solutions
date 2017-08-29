#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int a,b,c,d,e;
     cin>>a>>b>>c>>d>>e;
     if(d)
     {
         if(e)
         cout<<"Jogador 2 ganha!\n";
         else
         cout<<"Jogador 1 ganha!\n";
     }
     else
     {
         if(e)
         cout<<"Jogador 1 ganha!\n";
         else{
         int sum=c+b;
         int r;
         if(sum%2)
         r=0;
         else
         r=1;
         if(r==a)
         cout<<"Jogador 1 ganha!\n";
         else
         cout<<"Jogador 2 ganha!\n";

     }
     }

    return 0;
}
