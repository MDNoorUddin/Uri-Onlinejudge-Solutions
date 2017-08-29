#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,Y;
    for(;;)
    {
        cin>>X>>Y;
        if(X>Y)
        cout<<"Decrescente\n";
        if(X<Y)
        cout<<"Crescente\n";
        if(X==Y)
        break;
    }
 
    return 0;
}
