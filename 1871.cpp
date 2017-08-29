#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=a+b;
    while(a!=0||b!=0)
    {
        char x[100],i=0;
        while(true){
        if(a>=100){
            int f=a%100;
            if(f>9){
                f=f%10;
            }
            x[i]=f+48;
            a=a/10;
            i++;
        }
         if(a>=10&&a<100){
            int f=a%10;
            x[i]=f+48;
            a=a/10;
            i++;
        }
        if(a<10){
            x[i]=a+48;
            break;
        }
        }
        for(int u=i;u>=0;u--){
        if(x[u]!='0')
        cout<<x[u];
        }
        cout<<endl;
        cin>>a>>b;
        a=a+b;

    }
    return 0;
}
