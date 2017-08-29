#include <iostream>
#include<string.h>
using namespace std;
 
int main() {
 
    int t;
    cin>>t;
    int sum=0;
    char a[1111];
    for(int j=1;j<=t;j++)
    {
        cin>>a;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='0')
            sum=sum+6;
            if(a[i]=='1')
            sum=sum+2;
            if(a[i]=='2')
            sum=sum+5;
            if(a[i]=='3')
            sum=sum+5;
            if(a[i]=='4')
            sum=sum+4;
            if(a[i]=='5')
            sum=sum+5;
            if(a[i]=='6')
            sum=sum+6;
            if(a[i]=='7')
            sum=sum+3;
            if(a[i]=='8')
            sum=sum+7;
            if(a[i]=='9')
            sum=sum+6;
            
        }
        cout<<sum<<" leds\n";
        sum=0;
    }
 
    return 0;
}
