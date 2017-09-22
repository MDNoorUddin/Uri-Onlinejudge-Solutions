#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int max=0;
    bool wrong=false;
    while(cin>>n)
    {
        if(n>max&&!wrong)max=n;
        else
        {
            wrong=true;
        }
    }
    cout<<max+1<<endl;
}
