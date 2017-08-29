#include <iostream>

using namespace std;

int main() {

    int n,m;
    cin>>n>>m;
    while(n!=0&&m!=0)
    {
        int a=0;
        a=n+m;
        cout<<a<<endl;
        cin>>n>>m;
    }

    return 0;
}
