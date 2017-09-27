#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b&&a==c)
            cout<<"*\n";
        else
        {
            if(a==b)cout<<"C\n";
            else if(a==c)cout<<"B\n";
            else if(b==c)cout<<"A\n";
        }
    }
    return 0;
}
