#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    double a,b,c,d;
    cin>>t;
    while(t>0)
    {
        cin>>a>>b>>c;
        d=(a*2)+(b*3)+(c*5);
        d=d/10;
        printf("%.1lf\n",d);
        t--;
    }
 
    return 0;
}
