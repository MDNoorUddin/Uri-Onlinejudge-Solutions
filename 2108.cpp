#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string max;
    while(getline(cin,str))
    {
        if(str=="0")
        {
            cout<<endl<<"The biggest word: "<<max<<endl;
            break;
        }
        else
        {
            string temp;
            for(int i=0;i<str.length();i++)
            {
                if(str[i]!=' ')
                {
                    temp=temp+str[i];
                }
                else
                {
                    if(temp.length()>=max.length())
                    {
                        max=temp;
                    }
                    cout<<temp.length()<<"-";
                    temp.clear();
                }

            }
            if(!temp.empty())
            {
                cout<<temp.length()<<endl;
                if(temp.length()>=max.length())
                    {
                        max=temp;
                    }
            }
        }
    }
    return 0;
}
