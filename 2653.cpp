#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> x;
    string y;
    while(cin>>y)
    x.insert(y);
    cout<<x.size()<<endl;
    return 0;
}
