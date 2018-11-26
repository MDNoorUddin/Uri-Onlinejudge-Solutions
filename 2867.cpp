#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,m;
    while(t--)
    {
        cin>>n>>m;
        double lg=log10(n);
        lg*=m;
        cout<<floor(lg)+1<<endl;
    }
}
