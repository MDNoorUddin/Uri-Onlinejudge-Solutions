#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[1000][1000];
    int t,i=0;
    cin>>t;
    cin.ignore();
    while(t-->0)
    {
        cin>>str[i];
        i++;
    }
    for(int j=0;j<i;j++)
    {
        if(strlen(str[j])!=3)
            cout<<str[j];
            else if(strlen(str[j])==3)
            {
                if(str[j][0]=='U'&&str[j][1]=='R')
                    str[j][2]='I';
                if(str[j][0]=='O'&&str[j][1]=='B')
                    str[j][2]='I';
                    cout<<str[j];
            }
            if(j!=i-1)
            cout<<" ";
    }
    cout<<endl;

    return 0;
}
