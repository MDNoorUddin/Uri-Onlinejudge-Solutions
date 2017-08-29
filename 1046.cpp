#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    if(a>b)
    {
       c=24-a+b;
    }
    if(a<b)
    {
        c=b-a;
    }
    if(a==b)
    {
        c=24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",c);
    
    return 0;
}
