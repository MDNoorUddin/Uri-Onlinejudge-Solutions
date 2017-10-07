#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
     return (b == 0 ? a : gcd(b, a % b));
     }
int main()
{
    int yearPast;
    int L1,L2,L3;
    while(cin>>yearPast)
    {
        cin>>L1>>L2>>L3;
        int g=gcd(L1,L2);
        g=(L1*L2)/g;
        int c=gcd(g,L3);
        int yearsComing=(L3*g)/c;
        cout<<yearsComing-yearPast<<endl;
    }
}
