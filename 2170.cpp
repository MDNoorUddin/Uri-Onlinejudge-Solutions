#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double x,y;
    int i=1;
    while(cin>>x>>y){
    double z,Y;
    Y=y-x;
    //z=Y*100;
    //z=z/y;
    z=(Y*100)/x*1.00;
    cout<<"Projeto "<<i<<":"<<endl<<"Percentual dos juros da aplicacao: ";
    printf("%.2lf ",z);
    cout<<"%";
    cout<<endl<<endl;
    i++;
    }
    return 0;
}


