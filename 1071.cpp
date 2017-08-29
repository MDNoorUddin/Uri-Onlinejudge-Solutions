#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b;
    cin>>a>>b;
    int sum=0;
    if(a>b)
    {
        for(int i=a-1;i>b;i--)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    }
    else if(a<b)
    {
        for(int i=a+1;i<b;i++)
        {
             if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        
    }
    else if(a==b)
    sum=0;
    cout<<sum<<endl;
 
    return 0;
}
