#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        if(str.empty())
            cout<<endl;
        else
        {
            set<char> s;
            set<char>::iterator p;
            for(int i=0;i<str.length();i++)
            {
                if(str[i]!=' ')
                    s.insert(str[i]);
            }
            //sort(s.begin(),s.end());
            //cout<<str<<endl;
            p=s.begin();
            char first=*p,last=*p;
            p++;
            char temp;
            temp=first;
            bool x=false;
            while(p!=s.end())
            {
                temp++;
                if(temp==*p)
                {
                    last=*p;
                }
                else{
                    if(x)
                        cout<<" ";
                    cout<<first<<":"<<last<<",";
                    first=*p;
                    last=*p;
                    temp=*p;
                    x=true;
                }
                p++;
            }
            if(x)
                cout<<" ";
            cout<<first<<":"<<last<<endl;
        }
    }
    return 0;
}
