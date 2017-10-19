#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    string c;
    while(t--)
    {
        cin>>c;
        string temp;
        int sum=0;
        for(int i=0;i<14;i++)
        {
            if(c[i]>=48&&c[i]<=57)
                temp=temp+c[i];
            else
            {
                if(!temp.empty())
                {
                    stringstream geek(temp);
                    int f=0;
                    geek>>f;
                    temp.clear();
                    sum+=f;
                }
            }
        }
        if(!temp.empty())
        {
            stringstream geek(temp);
            int f=0;
            geek>>f;
            temp.clear();
            sum+=f;
        }
        //cin>>c;
        printf("%d\n",sum);
    }
    return 0;
}
