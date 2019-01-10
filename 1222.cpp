#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,l,c;
    string str;
    while(cin>>n>>l>>c)
    {
        cin.ignore();
        getline(cin,str);
        stringstream f(str);
        string temp;
        int line=0;
        int word=0;
        int count=0;
        string tem;
        //cout<<str.length()<<endl;
        while(f>>temp)
        {
            if(count==0)
            {
                count++;
                word+=temp.length();
                //cout<<word<<" "<<line<<endl;
                tem=temp;
                if(word==c)
                {
                    word=0;
                    line++;
                    //cout<<temp<<endl;
                }
                else
                {
                    word++;
                    tem=temp;
                }
                continue;
            }

            word+=temp.length();

            if(word>c)
            {
                word=temp.length();
                //word-=temp.length();
                word++;
                line++;
            }
            else if(word==c)
            {
                word=0;
                line++;
            }
            else
            {
                word++;
            }
            //cout<<word<<" "<<line<<endl;
            count++;
        }
        if(word!=0)line++;
        int y=line/l;
        if(line%l!=0)y++;
        cout<<y<<endl;
    }

}
