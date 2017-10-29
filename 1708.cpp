#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    double c;
    cin>>a>>b;
    a=abs(a-b);
    c=ceil(b/a);
    cout<<c<<endl;
    return 0;
}
