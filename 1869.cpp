#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("c.txt","w",stdout);
    unsigned long long int num;
    while(cin>>num)
    {
        if(num==0)
        {
            cout<<0<<endl;
            break;
        }
        string base32;
        int remainder;
        while(num!=0)
        {
            remainder=num%32;
            num/=32;
            if(remainder<10)base32+=remainder+'0';
            else
            {
                base32+=(remainder-10)+'A';
            }
        }
        for(int j=base32.length()-1;j>=0;j--)
        {
               cout<<base32[j];
        }
        cout<<endl;
    }
}
