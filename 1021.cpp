#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin>>x;
    int dup;
    printf("NOTAS:\n");
    int a=x/100;
    if(a!=0)
    x=x-(100*a);if(a!=0)x=x+0.001;
    printf("%d nota(s) de R$ 100.00\n",a);
    a=x/50;
    if(a!=0)
    x=x-(50*a);if(a!=0)x=x+0.001;
    printf("%d nota(s) de R$ 50.00\n",a);
    a=x/20;
    if(a!=0)
    x=x-(20*a);if(a!=0)x=x+0.001;
    printf("%d nota(s) de R$ 20.00\n",a);
    a=x/10;
    if(a!=0)
    x=x-(10*a);if(a!=0)x=x+0.001;
    printf("%d nota(s) de R$ 10.00\n",a);
    a=x/5;
    if(a!=0)
    x=x-(5*a);if(a!=0)x=x+0.001;
    printf("%d nota(s) de R$ 5.00\n",a);
    a=x/2;
    if(a!=0)
    x=x-(2*a);if(a!=0)x=x+0.001;
    printf("%d nota(s) de R$ 2.00\n",a);
    printf("MOEDAS:\n");
    a=x/1.00;
    if(a!=0)
    x=x-(1.00*a);if(a!=0)x=x+0.001;
    printf("%d moeda(s) de R$ 1.00\n",a);
    a=x/.50;
    if(a!=0)
    x=x-(.50*a);if(a!=0)x=x+0.001;
    printf("%d moeda(s) de R$ 0.50\n",a);
    a=x/.25;
    if(a!=0)
    x=x-(.25*a);if(a!=0)x=x+0.001;
    printf("%d moeda(s) de R$ 0.25\n",a);
    a=x/.10;
    if(a!=0)
    x=x-(.10*a);if(a!=0)x=x+0.001;
    printf("%d moeda(s) de R$ 0.10\n",a);
    a=x/.05;
    if(a!=0)
    x=x-(.05*a);
    if(a!=0)x=x+0.001;
    printf("%d moeda(s) de R$ 0.05\n",a);
    a=x/.01;
    if(a!=0)
    x=x-(.01*a);if(a!=0)x=x+0.001;;
    printf("%d moeda(s) de R$ 0.01\n",a);
    return 0;
}
