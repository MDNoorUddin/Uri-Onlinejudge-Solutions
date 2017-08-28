#include<iostream>
using namespace std;
int main()
{
    string str;
    int len;
    while(cin>>len>>str)
    {
        long long sum=0;
        for(int i=0;i<str.length();i++)
        {
            sum=sum+str[i]-48;
        }
        if(sum%3==0)
            cout<<sum<<" sim\n";
        else
            cout<<sum<<" nao\n";
        //cout<<sum<<endl;
    }
    return 0;
}
