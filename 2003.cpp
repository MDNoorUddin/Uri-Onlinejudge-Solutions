#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char c;
    while(cin>>a>>c>>b)
    {
        int A=a-7;
        int B=b;
        if(A<0)cout<<"Atraso maximo: 0\n";
        else{
            printf("Atraso maximo: %d\n",(A*60)+b);
        }
    }
    return 0;
}
