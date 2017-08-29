#include <iostream>
 #include<stdio.h>
using namespace std;

int main() {

    double a;
    double z=0.0;
    int count=0;
    while(1)
    {
        cin>>a;
        if(a<0)
        break;
        count++;
        z=z+a;
    }
    z=z/count;
    printf("%.2lf\n",z);


    return 0;
}
