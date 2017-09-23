#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if((a+b>c)&&(a+c>b)&&(c+b>a))
    {
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else{
        a=((a+b)*c)/2;
        printf("Area = %.1f\n",a);
    }
    return 0;
}
