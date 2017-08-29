#include <iostream>
 
using namespace std;
 
int main() {
    int a1,a2,b1,b2;
    float c1,c2;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    c1=b1*c1;
    c2=b2*c2;
    printf("VALOR A PAGAR: R$ %.2f\n",c1+c2);
 
    
 
    return 0;
}
