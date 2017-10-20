#include<bits/stdc++.h>
using namespace std;
string x="FEDCBA";
int main()
{
    string str;
    while(cin>>str)
    {
        if(str[0]=='-')break;
        if(str[1]=='x')
        {
            int si=str.length()-2-1;
            int g;
            long long dec=0;
            for(int i=2;i<str.length();i++)
            {
                if(str[i]>96)
                    str[i]=str[i]-32;
                if(str[i]>64)
                    g=str[i]-64+9;
                else
                    g=str[i]-48;
                    g=g*pow(16,si);
                    si--;
                    dec+=g;
            }
            cout<<dec<<endl;
        }
        else
        {
            stringstream f(str);
            int k=0;
            f>>k;
            //cout<<"dec "<<k<<endl;
            string st;
            int l;
            while(k>0)
            {
                l=k%16;
                k=k/16;
                if(l<10){
                    char hex=l+'0';
                    st=st+hex;
                }
                else
                {
                    st=st+x[16-l-1];
                }
            }
            printf("0x");
            for(int j=st.length()-1;j>=0;j--)
                cout<<st[j];
            cout<<endl;
        }
    }
    return 0;
}
