#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<float> a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    if(a[0]+a[1]<=a[2])
        printf("NAO FORMA TRIANGULO\n");
    else{
        if(a[2]*a[2]==((a[1]*a[1])+(a[0]*a[0])))
           printf("TRIANGULO RETANGULO\n");
        if(a[2]*a[2]>((a[1]*a[1])+(a[0]*a[0])))
           printf("TRIANGULO OBTUSANGULO\n");
        if(a[2]*a[2]<((a[1]*a[1])+(a[0]*a[0])))
           printf("TRIANGULO ACUTANGULO\n");
        if(a[0]==a[1]&&a[1]==a[2])
            printf("TRIANGULO EQUILATERO\n");
        if((a[0]==a[1]&&a[1]!=a[2])||(a[0]!=a[1]&&a[1]==a[2]))
           printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
