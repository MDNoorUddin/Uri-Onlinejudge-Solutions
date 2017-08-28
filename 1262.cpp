#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        int pros;
        cin>>pros;
        int count=0,cycles=0;
        bool R=false;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='W')
            {
                if(R&&count>0)
                    cycles+=1;
                cycles+=1;
                count=0;
                R=false;
            }
            else
            {
                R=true;
                count++;
                if(count==pros)
                {
                    cycles+=1;
                    count=0;
                }
            }

        }
        if(count>0)
            cycles+=1;
        cout<<cycles<<endl;
    }
    return 0;
}
