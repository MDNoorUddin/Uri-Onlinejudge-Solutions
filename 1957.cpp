#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long str,mod;
    cin>>str;
    string p;
    while(str>0)
    {
        mod = str % 16;
        str /= 16;
        if(mod<=9){
            char c=mod+'0';
            p=p+c;
        }
        else if(mod==10)
            p=p+'A';
        else if(mod==11)
            p=p+'B';
        else if(mod==12)
            p=p+'C';
        else if(mod==13)
            p=p+'D';
        else if(mod==14)
            p=p+'E';
        else if(mod==15)
            p=p+'F';
    }
    for(int i=p.length()-1;i>=0;i--)
        cout<<p[i];
    cout<<endl;
    return 0;
}
