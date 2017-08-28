#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    double x,y;
    x=n/log(n);
    y=x*1.25506;
    printf("%.1lf %.1lf\n",x,y);
    return 0;
}

