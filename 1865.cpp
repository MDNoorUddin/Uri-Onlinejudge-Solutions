#include <iostream>
 
using namespace std;
 
int main() {
 
    string x;
    int n,t;
    cin>>t;
    while(t-->0)
    {
        cin>>x>>n;
        if(x=="Thor")
        cout<<"Y\n";
        else
        cout<<"N\n";
    }
 
    return 0;
}
