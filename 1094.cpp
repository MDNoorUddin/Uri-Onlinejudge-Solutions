#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    int amount,rat=0,frog=0,rabbit=0,total=0;
    double p_frog,p_rat,p_rabbit;
    char c;
    cin>>t;
    while(t-->0)
    {
       cin>>amount;
       cin>>c;
       total=total+amount;
       if(c=='S')
       {
           frog=frog+amount;
       }
       if(c=='R')
       {
           rat=rat+amount;
       }
       if(c=='C')
       {
           rabbit=rabbit+amount;
       }
    }
    p_frog=(100.0*frog)/total;
    p_rat=(100.0*rat)/total;
    p_rabbit=(100.0*rabbit)/total;
    cout<<"Total: "<<total<<" cobaias\n";
    cout<<"Total de coelhos: "<<rabbit<<endl;
    cout<<"Total de ratos: "<<rat<<endl;
    cout<<"Total de sapos: "<<frog<<endl;
    printf("Percentual de coelhos: %.2lf ",p_rabbit);
    cout<<"%"<<endl;
    printf("Percentual de ratos: %.2lf ",p_rat);
    cout<<"%"<<endl;
    printf("Percentual de sapos: %.2lf ",p_frog);
    cout<<"%"<<endl;
    return 0;
}
