
 #include <iostream>
using namespace std;
 
int main() {
 
    string a;
    float x,y;
    cin>>a>>x>>y;
    y=y*15/100;
    x=x+y;
    printf("TOTAL = R$ %.2f\n",x);
 
    return 0;
}
