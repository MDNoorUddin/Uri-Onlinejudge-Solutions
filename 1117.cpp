#include<bits/stdc++.h>
using namespace std;
int main()
{
    float av=0.0;
    int I=0;
    float x;
    while(I<2)
    {
            cin>>x;
        if(x>=0.0&&x<=10.00)
        {
            av+=x;
            I++;
        }
        else cout<<"nota invalida\n";
    }
    printf("media = %.2f\n",av/2.00);
}
