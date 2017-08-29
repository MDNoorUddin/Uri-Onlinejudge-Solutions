#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    for(;;)
    {
        cin>>x;
        if(x==2002)
        {
            cout<<"Acesso Permitido\n";
            break;
        }
        else
        {
            cout<<"Senha Invalida\n";
        }
    }
 
    return 0;
}
