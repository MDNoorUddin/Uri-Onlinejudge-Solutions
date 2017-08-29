#include<iostream>
using namespace std;
int main()
{
    double money,tax=0,x;
    cin>>money;
    if(money<=2000.00)
    {
        cout<<"Isento\n";
    }
    else
    {
        x=money-2000.00;
        while(1)
        {
            if(x<=1000.00)
            {
                tax=tax+((8.00*x)/100);
                break;
            }
            if(x>1000.00&&x<=2500.00)
            {
                x=x-1000.00;
                tax=tax+((18.00*x)/100);
                x=1000.00;

            }
            if(x>2500.00)
            {
                x=x-2500.00;
                tax=tax+((28.00*x)/100);
                x=2500.00;
            }
        }
        printf("R$ %.2lf\n",tax);
    }

    return 0;
}
