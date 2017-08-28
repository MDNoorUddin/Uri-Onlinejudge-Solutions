#include<bits/stdc++.h>
using namespace std;
#define l long long
int main()
{
    l n;
    while(cin>>n&&n)
    {
        l a[n][n];
        l sum=1;
        for(l i=1;i<=n;i++,sum=sum*2)
        {
            l Sum=sum;
            for(l j=1;j<=n;j++)
            {
                if(i==j){
                    a[i-1][j-1]=Sum;
                }
                else
                {
                    a[i-1][j-1]=Sum;
                }
                Sum*=2;
            }
        }
        char digit[20];
        sprintf(digit,"%lld",a[n-1][n-1]);
        string str=digit;
        for(l i=0;i<n;i++)
        {
            for(l j=0;j<n;j++)
            {
                char digit1[20];
                sprintf(digit1,"%lld",a[i][j]);
                string str1=digit1;
                l space=str.length()-str1.length();
                for(l I=0;I<space;I++)
                    cout<<" ";
                cout<<a[i][j];
                if(j!=n-1)
                    cout<<" ";
            }
            cout<<endl;
        }
        //cout<<"Longest digit is "<<str.length()<<endl;
        cout<<endl;
    }
}
