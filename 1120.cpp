#include<iostream>
using namespace std;
int main()
{
    string str,x;
    char c;
    while(1)
    {
        cin>>c>>str;
        int flag=1;
        if(c=='0'&&str=="0")
            break;
            for(int i=0;i<str.length();i++)
            {
                if(c==str[i])
                    continue;
                else{
                        if(c==str[0]&&flag==1&&i!=0&&str[i]=='0')
                        {
                            flag=1;
                        }
                        else{
                        cout<<str[i];
                    flag=8;
                    }
            }
            }
                    if(flag!=8)
                        cout<<"0";
            cout<<endl;

    }
return 0;


}
