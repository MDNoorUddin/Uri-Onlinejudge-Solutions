#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int in;
        cin>>in;
        cin.ignore();
        vector<int> p(in+1);
        for(int i=0;i<p.size();i++)
            p[i]=0;
        string str;
        int position=0;
        int count=1;
        while(in--)
        {
            getline(cin,str);
            if(str[0]=='L')
            {
                position--;
                p[count++]=-1;
            }
            else if(str[0]=='R')
            {
                position++;
                p[count++]=1;
            }
            else
            {
                string temp;
                for(int i=str.length()-1;i>=0;i--)
                {
                    if(str[i]>57||str[i]==' ')
                        break;
                    temp=temp+str[i];
                }
                char s[temp.length()+1];
                for(int i=temp.length()-1,j=0;i>=0;i--,j++)
                    s[j]=temp[i];
                int index=atoi(s);
                if(p[index]==-1){
                    position--;
                    p[count++]=-1;
                }
                 if(p[index]==1){
                    position++;
                    p[count++]=1;
                }
            }
        }
        printf("%d\n",position);
    }
}
