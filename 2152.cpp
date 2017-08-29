#include <iostream>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<10)
        cout<<"0";
        cout<<a;
        cout<<":";
        if(b<10)
        cout<<"0";
        cout<<b;
        if(c==1)
        cout<<" - A porta abriu!\n";
        else
        cout<<" - A porta fechou!\n";

    }

    return 0;
}
