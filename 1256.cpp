#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool x=false;
    while(n--)
    {
        if(x)
        {
            cout<<endl;
        }
        else
            x=true;
        int a,b;
        cin>>a>>b;
        int c[b],i=0;
        for(int j=0;j<b;j++)
            cin>>c[j];
        for(i=0;i<a;i++)
        {
            cout<<i<<" -> ";
            for(int j=0;j<b;j++){
            //cout<<i<<" ->";
            if(c[j]%a==i)
                cout<<c[j]<<" -> ";
            //if(i+1==a)
                //cout<<" \\n";
            }
            cout<<"\\\n";
        }
    }
    return 0;
}
