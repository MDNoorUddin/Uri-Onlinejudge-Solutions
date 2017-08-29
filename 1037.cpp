#include<iostream>
using namespace std;
int main()
{
    float x;
    cin>>x;
    if(x>=0&&x<=100){
    if(x>=0.0000&&x<=25.0000)
    {
        cout<<"Intervalo [0,25]\n";
    }
    if(x>25.0000&&x<=50.0000)
    {
        cout<<"Intervalo (25,50]\n";
    }
    if(x>50.0000&&x<=75.0000)
    {
        cout<<"Intervalo (50,75]\n";
    }
    if(x>75.0000&&x<=100.0000)
    {
        cout<<"Intervalo (75,100]\n";
    }
    }
    else
    {
        cout<<"Fora de intervalo\n";
    }
    return 0;
}
