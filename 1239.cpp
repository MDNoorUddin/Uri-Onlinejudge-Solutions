#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char x[1000];
    string str;
     while(gets(x) != NULL ) {
        str=x;
        int o=0,e=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='_')
            {
                o++;
                if(o%2==0)
                    cout<<"</i>";
                else
                    cout<<"<i>";
            }
             else if(str[i]=='*')
            {
                e++;
                if(e%2==0)
                    cout<<"</b>";
                else
                    cout<<"<b>";
            }
            else
                cout<<str[i];
        }
        cout<<endl;
}
return 0;
}
