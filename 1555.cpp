#include <iostream>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t-->0)
    {
        int a,b;
        cin>>a>>b;
        long long c[3],l;
        c[0]=(3*a*a*3)+(b*b);
        c[1]=2*(a*a)+(5*b*b*5);
        c[2]=(b*b*b)-(100*a);
        l=c[0];
        for(int i=1;i<3;i++)
        {
            if(c[i]>l)
            l=c[i];
        }
        if(l==c[0])
        cout<<"Rafael ganhou\n";
        else if(l==c[1])
        cout<<"Beto ganhou\n";
        else if(l==c[2])
        cout<<"Carlos ganhou\n";
    }
    return 0;
}
