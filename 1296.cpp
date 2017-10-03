#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653589793
int main()
{
    //freopen("c.txt","w",stdout);
    vector<double> a(3);
    while(cin>>a[0]>>a[1]>>a[2])
    {
        sort(a.begin(),a.end());
        if(a[0]+a[1]>a[2])
        {
        double s=(a[0]+a[1]+a[2])/2.00;
        double area=sqrt(s*(s-a[0])*(s-a[1])*(s-a[2]));
        area=4*area/3;
        printf("%.3lf\n",area);
        }
        else
        {
            printf("-1.000\n");
        }
    }
    return 0;
}
