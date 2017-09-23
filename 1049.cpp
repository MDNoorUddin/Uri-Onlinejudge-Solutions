#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    if(a[0]=='v')
    {
        if(b[0]=='a'){
            if(c[0]=='c')cout<<"aguia\n";
            else cout<<"pomba\n";
        }
        else{
            if(c[0]=='o')cout<<"homem\n";
            else cout<<"vaca\n";
        }
    }
    else{
        if(b[0]=='i')
        {
            if(c.length()==10)cout<<"pulga\n";
            else cout<<"lagarta\n";
        }
        else{
            if(c[0]=='h')cout<<"sanguessuga\n";
            else cout<<"minhoca\n";
        }
    }
    return 0;
}
