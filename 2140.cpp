#include<iostream>
using namespace std;
int main()
{
    int a,b,diff,count=0;
    cin>>a>>b;

    while(a!=0&&b!=0)
    {
        diff=b-a;
        if(diff>=100)
        {
            diff-=100;
            count++;
        }
         if(diff>=50&&diff<100)
            {
                count++;
                diff-=50;
            }
            if(diff>=20&&diff<50)
            {
                count++;
                diff-=20;
            }
            if(diff>=10&&diff<20)
            {
                count++;
                diff-=10;
            }
            if(diff>=5&&diff<10)
            {
                count++;
                diff-=5;
            }
            if(diff>=2&&diff<5)
            {
                count++;
                diff-=2;
            }
        if(count==2&&diff==0)
            cout<<"possible\n";
        else
            cout<<"impossible\n";
        cin>>a>>b;
        count=0;
    }


}
