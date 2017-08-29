#include <iostream>
#include<stdio.h>
using namespace std;

int main() {

    double vol,rad,area,height;
    while(scanf("%lf %lf", &vol ,&rad)!=EOF)
    {
        rad=rad/2;
        area=3.14*rad*rad;
        height=vol/(3.14*rad*rad);
        printf("ALTURA = %.2lf\n",height);
        printf("AREA = %.2lf\n",area);

    }

    return 0;
}
