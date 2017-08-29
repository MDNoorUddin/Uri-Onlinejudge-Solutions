#include<iostream>
using namespace std;
int main()
{
    string x;
    int t;
    cin>>t;
    while(t!=0)
    {
        string x;
        cin>>x;
        int n=1;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='D')
            {
                n++;
                if(n>4)
                    n=1;
            }
            if(x[i]=='E')
            {
                n--;
                if(n==0)
                n=4;

            }
        }
        if(n==1)
            cout<<"N\n";
        if(n==2)
            cout<<"L\n";
        if(n==3)
            cout<<"S\n";
        if(n==4)
            cout<<"O\n";
        cin>>t;
    }
    return 0;

}
