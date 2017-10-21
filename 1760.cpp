#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva.txt","w",stdout);
    double a;
    while(cin>>a)
    {
        double r=sqrt(3)/4.00;
        double area=r*a*a;
        printf("%.2f\n",area*1.6);
    }
    return 0;
}
