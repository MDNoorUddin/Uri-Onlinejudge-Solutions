#include<iostream>
#include<cstdio>
int main()
{
    double a,b,c,p,pi=3.14159,tri,cir,tra,square,rect;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
    tri=a*c/2;
    cir=pi*c*c;
    p=a+b;
    tra=.5*p*c;
    square=(b*b);
    rect=a*b;
  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,square,rect);
}
}
