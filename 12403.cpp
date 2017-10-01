#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum=0;
    string a;
    int b;
    while(t--)
    {
        cin>>a;
        if(a=="donate")
        {
            cin>>b;
            sum+=b;
        }
        else
            cout<<sum<<endl;
    }
}
