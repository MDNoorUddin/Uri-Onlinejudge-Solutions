#include <iostream>
using namespace std;
int main()
{
    int money,number;
    int _100=0,_50=0,_20=0,_10=0,_5=0,_2=0,_1=0;
    cin>>money;
    number=money;
    if(money>=100)
    {
        _100=money/100;
        money=money%100;
    }
    if(money>=50)
    {
        _50=money/50;
        money=money%50;
    }
    if(money>=20)
    {
        _20=money/20;
        money=money%20;
    }
    if(money>=10)
    {
        _10=money/10;
        money=money%10;
    }
    if(money>=5)
    {
        _5=money/5;
        money=money%5;
    }
    if(money>=2)
    {
        _2=money/2;
        money=money%2;
    }
    if(money>=1)
    {
        _1=money/1;
    }
    cout<<number<<endl;
    cout<<_100<<" nota(s) de R$ 100,00"<<endl;
    cout<<_50<<" nota(s) de R$ 50,00"<<endl;
    cout<<_20<<" nota(s) de R$ 20,00"<<endl;
    cout<<_10<<" nota(s) de R$ 10,00"<<endl;
    cout<<_5<<" nota(s) de R$ 5,00"<<endl;
    cout<<_2<<" nota(s) de R$ 2,00"<<endl;
    cout<<_1<<" nota(s) de R$ 1,00"<<endl;
    

    return 0;
}
