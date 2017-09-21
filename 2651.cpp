#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65&&str[i]<=90)str[i]=str[i]+32;
    }
    size_t found = str.find("zelda");
    if(found!=std::string::npos)cout<<"Link Bolado\n";
    else cout<<"Link Tranquilo\n";
    return 0;
}
