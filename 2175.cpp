#include<iostream>
using namespace std;
int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    if(x==y||y==z||x==z)
        cout<<"Empate"<<endl;
    else if(x<y&&x<z)
        cout<<"Otavio"<<endl;
    else if(y<x&&y<z)
        cout<<"Bruno"<<endl;
    else if(z<y&&z<x)
        cout<<"Ian"<<endl;
    return 0;
}
