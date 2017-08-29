#include<iostream>
using namespace std;
int main()
{
    int a,m=0,n=0,k=0;
    while(1)
    {
        cin>>a;
        if(a==1)
        m++;
        if(a==2)
        n++;
        if(a==3)
        k++;
        if(a==4)
        break;
        
        
    }cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<m<<endl;
    cout<<"Gasolina: "<<n<<endl;
    cout<<"Diesel: "<<k<<endl;
}
