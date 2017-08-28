#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        string mirror;
        for(int I=a;I<=b;I++)
        {
            int i=I;
            while(true)
            {
                char c;
                if(i>=10000)
                {
                    int mod=i/10000;
                    i=i%10000;
                    c='0'+mod;
                    mirror=mirror+c;
                    if(i<1000)
                        mirror=mirror+'0';
                    if(i<100)
                        mirror=mirror+'0';
                    if(i<10)
                        mirror=mirror+'0';
                }
                else if(i>=1000&&i<10000)
                {
                    int mod=i/1000;
                    i=i%1000;
                    c='0'+mod;
                    mirror=mirror+c;
                    if(i<100)
                        mirror=mirror+'0';
                    if(i<10)
                        mirror=mirror+'0';
                }
                else if(i>=100&&i<1000)
                {
                    int mod=i/100;
                    i=i%100;
                    c='0'+mod;
                    mirror=mirror+c;
                    if(i<10)
                        mirror=mirror+'0';
                }
                else if(i>=10&&i<100)
                {
                    int mod=i/10;
                    i=i%10;
                    c='0'+mod;
                    mirror=mirror+c;
                }
                else if(i<10)
                {
                    int mod=i;
                    c='0'+mod;
                    mirror=mirror+c;
                    break;
                }
                //cout<<"i="<<i<<endl;

            }

        }
        cout<<mirror;
        for(int i=mirror.length()-1;i>=0;i--)
            cout<<mirror[i];
        cout<<endl;
    }
    return 0;
}
