#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        string x;
        for(int i=0;i<str.length();)
        {
            if(i==0){
                x=x+str[i++];
                i++;
            }
            if(str[i]==' '){
                i++;
                x=x+str[i];
                i++;
            }
            else
                i++;
        }
        //cout<<x<<endl;
        int count=0;
        bool X=false;
        for(int j=0;j<x.length()-1;j++)
        {
            if(x[j]>=65&&x[j]<=90)
                x[j]=x[j]+32;
            if(x[j]==x[j+1])
                X=true;
            else
            {
                if(X)
                {
                    count++;
                    X=false;
                }
            }
        }
        if(X)
            count++;
        cout<<count<<endl;
    }
    return 0;
}
