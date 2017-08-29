#include <iostream>
#include <math.h>>

using namespace std;

int main() {

    int t,n,b=1;
    unsigned long long sum=0;
    cin>>t;
    while(t>0)
    {
     cin>>n;
     sum=pow(2,n)/12000;
     cout<<sum<<" kg"<<endl;
     sum=0;
     b=1;
     t--;
    }

    return 0;
}
