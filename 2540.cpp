#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    while(cin>>n)
    {
        int _1=0;
        for(int i=0;i<n;i++)
        {
            cin>>m;
            if(m)
                _1++;
        }
        float M=ceil(n*.666);
        int x=(int) M;
        if(_1>=x)
            cout<<"impeachment\n";
        else cout<<"acusacao arquivada\n";
    }
    return 0;
}
