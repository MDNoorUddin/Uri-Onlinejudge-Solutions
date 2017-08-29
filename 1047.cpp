#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=0,e,f;
    cin>>a>>b>>e>>f;
    if(a>e)
    {
       c=24-a+e;
    }
    if(a<e)
    {
        c=e-a;
    }
    if(a==e)
    {
        c=24;
    }
    if(f>b)
    {
        d=f-b;
    }
    if(f<b)
    {
        d=60-b+f;
        c--;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,d);
    return 0;
}
