#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    while(cin>>x>>y){
            bool X=false;
    for(int i=0;i<x.length();i++)
    {
        X=false;
        if(x[i]==y[0])
        {
            for(int j=i,k=0;k<y.length();j++,k++)
            {
                if(x[j]==y[k])
                {
                    X=true;
                }
                else
                {
                    X=false;
                    break;
                }
            }
        }
        if(X)
            break;
    }
    if(X)
        cout<<"Resistente\n";
    else
        cout<<"Nao resistente\n";
    }
    return 0;
}

