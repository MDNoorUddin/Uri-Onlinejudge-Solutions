#include<bits/stdc++.h>
using namespace std;
#define pi  3.1415926535897
int main()
{
    vector<double> a(3);
    while(cin>>a[0]>>a[1]>>a[2])
    {
        sort(a.begin(),a.end());
        double s=(a[0]+a[1]+a[2])/2;
        double triangleArea=sqrt(s*(s-a[0])*(s-a[1])*(s-a[2]));
        double circleRadius=(a[0]*a[1]*a[2])/(4*triangleArea);
        double circleArea=pi*pow(circleRadius,2);
        double innerCirclerRadius=triangleArea/s;
        double innerCircleArea=pi*pow(innerCirclerRadius,2);
        double triangleReducedArea=triangleArea-innerCircleArea;
        circleArea-=triangleArea;
        printf("%.4lf %.4lf %.4lf\n",circleArea,triangleReducedArea,innerCircleArea);

    }
    return 0;
}
