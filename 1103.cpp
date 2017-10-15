#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
        {
            break;
        }
        int hour=0,min=0;
        if(h2>h1)
        {
            hour=h2-h1;
            if(m2>m1)
            {
                min=m2-m1;
            }
            else if(m2<m1)
            {
                min=60+m2-m1;
                hour--;
            }
            else
            {
                min=0;
            }
        }
        else if(h1>h2)
        {
            hour=24+h2-h1;
            if(m2>m1)
            {
                min=m2-m1;
            }
            else if(m2<m1)
            {
                min=60+m2-m1;
                hour--;
            }
            else
            {
                min=0;
            }
        }
        else
        {
            if(m1<m2)
            {
                hour=0;
                min=m2-m1;
            }
            else if(m2<m1)
            {
              hour=23;
              min=60+m2-m1;
            }
            else
            {
                hour=0;
                min=0;
            }
        }
        printf("%d\n",((60*hour)+min));
    }
    return 0;
}
