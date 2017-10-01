#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    string temp;
    set<string> uri;
    while(cin.get(c))
    {
        if((c>=65&&c<=90)||(c>=97&&c<=122))
        {
            temp+=tolower(c);
        }
        else
        {
            uri.insert(temp);
            temp.clear();
        }
    }
    if(!temp.empty())
    {
        uri.insert(temp);
        temp.clear();
    }
    int s=uri.size();
    for(set<string>::iterator i=uri.begin();i!=uri.end();i++)
    {
        if(i==uri.begin())i++;
        if(*i!="\n")
        cout<<*i<<endl;
    }
    return 0;
}
