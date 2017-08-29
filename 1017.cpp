#include<iostream>
using namespace std;
int main()
{
    int hour,speed;
    double liter;
    cin>>hour>>speed;
    hour=hour*speed;
    liter=hour/12.0;
    printf("%.3lf\n",liter);
}
