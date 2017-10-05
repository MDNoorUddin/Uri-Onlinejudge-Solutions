#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    double  a,b;
    while(t--)
    {
        cin>>a>>b;
        int A=ceil((a-2)/3);
        int B=ceil((b-2)/3);
        cout<<A*B<<endl;
    }
    return 0;
}
