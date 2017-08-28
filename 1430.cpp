#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    while(getline(cin,x))
    {
        stack<char>str;
        if(x=="*")
            break;
        int count=0;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]!='/')
                str.push(x[i]);
            //cout<<str.top()<<endl;
            if(x[i]=='/'&&!str.empty())
            {
                float c=0.0;
                while(!str.empty())
                {

                    if(str.top()=='W')
                        c=c+1;
                    if(str.top()=='H')
                        c=c+.5;
                    if(str.top()=='Q')
                        c=c+0.25;
                    if(str.top()=='E')
                        c=c+0.125;
                    if(str.top()=='S')
                        c=c+0.0625;
                    if(str.top()=='T')
                        c=c+0.03125;
                    if(str.top()=='X')
                        c=c+0.015625;
                    str.pop();
                }
                //cout<<c<<endl;
                if(c==1)
                    count++;
            }
        }
        cout<<count<<endl;
    }

}
