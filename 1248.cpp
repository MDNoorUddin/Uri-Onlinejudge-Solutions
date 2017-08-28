#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string str;
        string break_fast,lunch;
        getline(cin,str);
        getline(cin,break_fast);
        getline(cin,lunch);
        string add=break_fast+lunch;
        bool chet=false;
        for(int i=0;i<add.length();i++)
        {
            bool x=false;
            for(int j=0;j<str.length();j++)
            {
                if(str[j]==add[i])
                {
                    x=true;
                }
            }
            if(!x){
                chet=true;
                break;
            }
        }
        if(chet)
        {
            cout<<"CHEATER\n";
        }
        else
        {
            string dinner;
            for(int i=0;i<str.length();i++)
        {
            bool x=false;
            for(int j=0;j<add.length();j++)
            {
                if(str[i]==add[j])
                {
                    x=true;
                }
            }
            if(!x){
                //cout<<str[i];
                dinner=dinner+str[i];
            }
        }
        sort(dinner.begin(),dinner.end());
        cout<<dinner;
        cout<<endl;
        }

    }
    return 0;
}
