#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    string f;
    getline(cin,f);
    while(t--)
    {

        string str,s;
        getline(cin,str);
        getline(cin,s);
        for(int i=1,j=0,k=0;i<=str.length();i++)
        {
            if(i%2==0)
            {
                cout<<s[k];
                if(s.length()>k+1)cout<<s[k+1];
                k+=2;
            }
            else
            {
                cout<<str[j]<<str[j+1];
                j+=2;
            }
        }
        cout<<'\n';
    }
}
