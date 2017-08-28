#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        int j=0;
        int k=str.length();
        for(int counter=0;counter<str.length();counter++){
        for(int i=0;i<j;i++)
        {
            cout<<" ";

        }
        for(int I=0;I<k-1;I++)
        {
            cout<<str[I]<<" ";
        }
        cout<<str[k-1];
        cout<<endl;
        k--;
        j++;
        }
        cout<<endl;
    }
    return 0;
}
