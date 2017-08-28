#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    while(str!="0")
    {
        int n=str.length();
        int a[n];
        long long acm=0;
        int b[6];
        b[4]=120;
        b[3]=24;
        b[2]=6;
        b[1]=2;
        b[0]=1;
        for(int i=0;i<str.length();i++)
        {
            a[i]=str[i]-48;
        }
        for(int i=0,j=str.length()-1;i<str.length();i++,j--)
        {
            acm=acm+(a[i]*b[j]);
        }
        cout<<acm<<endl;
        cin>>str;
    }
    return 0;
}
