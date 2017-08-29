#include <iostream>
#include<stdio.h>
using namespace std;

int main() {

     double sum=0.0,i,j;
     for(j=1,i=1;j<=39;j=j+2,i=i*2)
     {
             sum=sum+(j/i);
     }
     printf("%.2lf\n",sum);

    return 0;
}
