#include <iostream>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t-->0)
    {
        int d=0;
        float x;
        cin>>x;
        while(x>1.0){
            d++;
            x=x/2.00;
        }
        cout<<d<<" dias\n";
    }

    return 0;
}
