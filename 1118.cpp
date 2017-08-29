#include <iostream>
 #include<stdio.h>
using namespace std;

int main() {

   double x,y;
   int c=1;
   while(c==1)
   {
       while(1)
       {
           cin>>x;
           if(x>=0&&x<=10)
           break;
           cout<<"nota invalida\n";
       }
       while(1)
       {
           cin>>y;
           if(y>=0&&y<=10)
           break;
           cout<<"nota invalida\n";
       }
       x=x+y;
       x=x/2.00;
       printf("media = %.2lf\n",x);
        while(1)
       {
           cin>>c;
           if(c>=1&&c<=2)
           break;
            cout<<"novo calculo (1-sim 2-nao)\n";
       }
       cout<<"novo calculo (1-sim 2-nao)\n";
   }

    return 0;
}
