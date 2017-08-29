#include<iostream>

using namespace std;

int main()
{
    int a,b,c,count=0;
    double d,e,ave=0,n;
    cin>>a>>b>>c;
    while(a!=0&&b!=0&&c!=0)
    {
        d=(a+b)/2.0;
        n=c/30.00;
        e=d*(1+n);
        if(e>=1&&e<13)
            cout<<"Nao vai da nao\n";
       else if(e>=13&&e<14)
            cout<<"E 13\n";
           else if(e>=14&&e<40.00)
            cout<<"Bora, hora do show! BIIR!\n";
           else if(e>=40&&e<=60.00)
            cout<<"Ta saindo da jaula o monstro!\n";
            else
            cout<<"AQUI E BODYBUILDER!!\n";

            ave+=e;
            count+=1;
            cin>>a>>b>>c;
    }
    ave=ave/count;
    if(ave>40)
    {
        cout<<endl;
        cout<<"Aqui nois constroi fibra rapaz! Nao e agua com musculo!\n";
    }
}
