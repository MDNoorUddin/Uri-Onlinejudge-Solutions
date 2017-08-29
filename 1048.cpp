#include <iostream>
using namespace std;
int main()
{
    float money,money2;
    int percent;
    cin>>money;
    if(money>=0.00&&money<=400.00)
    {
        percent=15;
        money2=money+((money*15.0)/100.0);
        money=money2-money;
    }
    if(money>=400.01&&money<=800.00)
    {
        percent=12;
        money2=money+((money*12.0)/100.0);
        money=money2-money;
    }
    if(money>=800.01&&money<=1200.00)
    {
        percent=10;
        money2=money+((money*10.0)/100.0);
        money=money2-money;
    }
    if(money>=1200.01&&money<=2000.00)
    {
        percent=7;
        money2=money+((money*7.0)/100.0);
        money=money2-money;
    }
    if(money>2000.00)
    {
        percent=4;
        money2=money+((money*4.0)/100.0);
        money=money2-money;
    }
    printf("Novo salario: %.2f\n",money2);
    printf("Reajuste ganho: %.2f\n",money);
    cout<<"Em percentual: "<<percent<<" %\n";

    return 0;
}
