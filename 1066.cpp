#include <iostream>
 
using namespace std;
 
int main() {
 
    int a[5];
    int even=0,odd=0,positive=0,negative=0;
    
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            even++;
        }
        if(a[i]%2!=0)
        {
            odd++;
        }
        if(a[i]>0)
        {
            positive++;
        }
        if(a[i]<0)
        {
            negative++;
        }
    }
    cout<<even<<" valor(es) par(es)\n";
    cout<<odd<<" valor(es) impar(es)\n";
    cout<<positive<<" valor(es) positivo(s)\n";
    cout<<negative<<" valor(es) negativo(s)\n";
 
    return 0;
}
