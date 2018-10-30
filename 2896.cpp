#include <iostream>
 
using namespace std;
 
int main() {
 
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<(n%k)+(n/k)<<endl;
    }
 
    return 0;
}
