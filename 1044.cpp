#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=abs(a);
    b=abs(b);
    if(b>a)swap(a,b);
    if(a%b==0)cout<<"Sao Multiplos\n";
    else cout<<"Nao sao Multiplos\n";
}
