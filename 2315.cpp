#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int c,d;
    cin>>a>>b;
    cin>>c>>d;
    int day=0;
    //day=a;
    if(b==d)
    {
        day=c-a;
    }
    else{
    for(int i=b;i<=d;i++)
    {
        if(i==4||i==6||i==9||i==11)
        {
            if(i==b)
            {
                day+=30-a;
            }
            else if(i==d)
            {
                day=day+c;
            }
            else
                day=day+30;

        }
        else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
        {
            if(i==b)
            {
                day+=31-a;
            }
            else if(i==d)
            {
                day=day+c;
            }
            else
                day=day+31;

        }
        else
        {
            if(i==b)
            {
                day+=28-a;
            }
            else if(i==d)
            {
                day=day+c;
            }
            else
            day=day+28;
        }
    }
    }
    cout<<day<<endl;
    return 0;
}
