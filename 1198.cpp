#include <iostream>
 
using namespace std;
 
int main() {
 
    int diff;
    long long a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        long long small,large;
        if(a<=b)
        {
            small=a;
            large=b;
        }
        else
        {
            small=b;
            large=a;
        }
        cout<<large-small<<endl;
    }
    return 0;
}
