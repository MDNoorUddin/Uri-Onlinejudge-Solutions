#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cin.ignore();
        int pos=0;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            for(int j=0;j<str.length();j++)
            {
                char c=str[j];
                int diff=c-65;
                //cout<<diff<<endl;
                sum+=j+diff+pos;
            }
            pos++;
        }
        cout<<sum<<endl;
    }
}
