#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    string str;
    getline(cin,str);
    set<char> x;
    set<char>::iterator X;
    vector<int> y;
    vector<char> Y;
    vector<char>::iterator w;
    string str2;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65&&str[i]<=90)
           str[i]=str[i]+32;
        if(str[i]!=' '){
        x.insert(str[i]);
        str2+=str[i];
        }
    }
    /****
    for coping the set*/
    X=x.begin();
    while(X!=x.end())
    {
        Y.push_back(*X);
        X++;
    }

    int val=0;
    int i=0;
    sort(str2.begin(),str2.end());
    for(X=x.begin();X!=x.end();X++)
    {
        for(;i<str2.length();i++)
        {
            if(*X==str2[i])
                val++;
            else
            {
                y.push_back(val);
                val=0;
                break;
            }
        }
    }
    if(val>0)
        y.push_back(val);
    //int Max=max(y.begin(),y.end());
    //for(int i=0;i<y.size();i++)
        //cout<<y[i]<<endl;/**vector*/
    /**sort(y.begin(),y.end());*/
    //now use bubble sort
    for(int n=0;n<y.size();n++)
    {
        int ptr=0;
        while(ptr<y.size()-n-1)
        {
            if(y[ptr]>y[ptr+1])
            {
                swap(y[ptr],y[ptr+1]);
                swap(Y[ptr],Y[ptr+1]);
            }
            ptr++;
        }
    }
    int Max=y[y.size()-1];
    string output;
    w=Y.end();/**set*/
    w--;
    int I=(y.size()-1);
    for(int i=I;i>=0;i--)
    {
        if(y[i]==Max)
        {
            output+=*w;
            w--;
        }
        else
            break;
    }
    sort(output.begin(),output.end());
    cout<<output<<endl;
    }
    return 0;
}
