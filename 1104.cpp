#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            break;
        set<int> x;
        set<int> y;
        for(int i=0;i<a;i++)
        {
            int c;
            cin>>c;
            x.insert(c);
        }
        for(int i=0;i<b;i++)
        {
            int c;
            cin>>c;
            y.insert(c);
        }
        vector<int> num1;
        set<int>::iterator it1;
        for(it1=x.begin();it1!=x.end();it1++)
            num1.push_back(*it1);
        vector<int> num2;
        set<int>::iterator it2;
        for(it2=y.begin();it2!=y.end();it2++)
            num2.push_back(*it2);
        int min1=0,min2=0;
        for(int i=0;i<num1.size();i++)
        {
            bool check=false;
            for(int j=0;j<num2.size();j++)
            {
                if(num1[i]==num2[j])
                {
                    check=true;
                    min2++;
                    break;
                }
            }
            if(!check)
                min1++;
        }
        min2=num2.size()-min2;
        cout<<min(min1,min2)<<endl;

    }
    return 0;
}

