#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        int i;
        string temp,temp1;
        for(i=0;i<str.length();i++)
        {
            if(str[i]!=' '&&str[i]!='.'){
                temp=temp+str[i];
                char c=tolower(str[i]);
                temp1=temp1+c;
            }
            else
            {
                if(temp.length()==10)
                {
                    string x;
                    for(int j=1;j<9;j++)
                        x=x+temp1[j];
                    if(x=="oulupukk")
                        cout<<"Joulupukki";
                    else
                        cout<<temp;

                }
                else
                {
                    cout<<temp;
                }
                temp.clear();
                temp1.clear();
                if(str[i]==' ')
                    cout<<" ";
                if(str[i]=='.')
                    cout<<".";
            }
        }
        if(!temp.empty())
        {
            if(temp.length()==10)
                {
                    string x;
                    for(int j=1;j<9;j++)
                        x=x+temp1[j];
                    if(x=="oulupukk")
                        cout<<"Joulupukki";
                    else
                        cout<<temp;

                }
            else
                cout<<temp;
        }
        cout<<endl;
    }
}
