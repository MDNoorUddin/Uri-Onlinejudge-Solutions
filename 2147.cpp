#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    while(n--)
    {
        char x[10001];
        cin>>x;
        int c=strlen(x);
        double z=.01*c;
        printf("%.2lf\n",z);


    }

    return 0;
}
