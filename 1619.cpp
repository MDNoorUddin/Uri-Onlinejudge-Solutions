#include<bits/stdc++.h>
using namespace std;
bool leapyear(int year)
{
    if(year%400==0)return true;
    if(year%100!=0&&year%4==0)return true;
    return false;
}

int a[13];
int b[13];
void sieve()
{
    a[1]=0;
    for(int i=2;i<=12;i++)
    {
        if(i==2||i==4||i==6||i==9||i==11)
            a[i]=a[i-1]+31;
        if(i==3)a[i]=a[i-1]+28;
        if(i==5||i==7||i==10||i==12)
        {
            a[i]=a[i-1]+30;
        }
        if(i==8)a[i]=a[i-1]+31;
    }
    b[1]=0;
    for(int i=2;i<=12;i++)
    {
        if(i==2||i==4||i==6||i==9||i==11)
            b[i]=b[i-1]+31;
        if(i==3)b[i]=b[i-1]+29;
        if(i==5||i==7||i==10||i==12)
        {
            b[i]=b[i-1]+30;
        }
        if(i==8)b[i]=b[i-1]+31;
    }
    //for(int i=1;i<=12;i++)
        //cout<<a[i]<<endl;
}
int yearsum(int y)
{
    int sum=0;
    for(int i=1971;i<=y;i++)
    {
        if(leapyear(i-1))sum+=366;
        else sum+=365;
    }
    return sum;
}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int y1,y2;
        int m1,m2;
        int d1,d2;
        scanf("%d-%d-%d",&y1,&m1,&d1);
        scanf("%d-%d-%d",&y2,&m2,&d2);
        int day1,day2;
        day1=yearsum(y1);
        day2=yearsum(y2);

        int tr=a[m1]+d1;

        if(leapyear(y1))
        {
            tr=b[m1]+d1;
        }
        day1+=tr;
        tr=a[m2]+d2;
        if(leapyear(y2))
        {
            tr=b[m2]+d2;
        }
        day2+=tr;
        cout<<abs(day1-day2)<<endl;
    }
}
