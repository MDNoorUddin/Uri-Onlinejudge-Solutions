#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cin>>x>>y;
    if(x==0&&y==0)
    {
        cout<<"Origem\n";
    }
    if(x>0&&y>0)
    {
        cout<<"Q1\n";
    }
    if(x<0&&y>0)
    {
        cout<<"Q2\n";

    }
    if(x<0&&y<0)
    {
        cout<<"Q3\n";
    }
    if(x>0&&y<0)
    {
        cout<<"Q4\n";
    }
    if((x>0||x<0)&&y==0)
    {
        cout<<"Eixo X\n";
    }
    if((y>0||y<0)&&x==0)
    {
        cout<<"Eixo Y\n";
    }
    return 0;
}
