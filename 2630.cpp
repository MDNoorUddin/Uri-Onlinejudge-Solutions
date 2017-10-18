#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int I=1;
    double a[3];
    string str;
    while(t--)
    {
        cin>>str;
        cin>>a[0]>>a[1]>>a[2];
        if(str[0]=='e')
        {
            a[0]=(a[0]*30)/100;
            a[1]=(a[1]*59)/100;
            a[2]=(a[2]*11)/100;
            a[0]=a[0]+a[1]+a[2];
            int f=a[0];
            printf("Caso #%d: %d\n",I++,f);
        }
        else if(str.length()==4)
        {
            int m=(a[0]+a[1]+a[2])/3;
            printf("Caso #%d: %d\n",I++,m);
        }
        else
        {
            sort(a,a+3);
            if(str[1]=='i')
            {
                int f=a[0];
                printf("Caso #%d: %d\n",I++,f);
            }
            else
            {
                int f=a[2];
                printf("Caso #%d: %d\n",I++,f);
            }
        }
    }
}
