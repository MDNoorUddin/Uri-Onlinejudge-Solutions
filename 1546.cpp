#include <iostream>
 
using namespace std;
 
int main() {
 
int n;
cin>>n;
while(n-->0)
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int x;
        cin>>x;
        if(x==1)
        cout<<"Rolien\n";
        if(x==2)
        cout<<"Naej\n";
        if(x==3)
        cout<<"Elehcim\n";
        if(x==4)
        cout<<"Odranoel\n";
    }
}
 
    return 0;
}
