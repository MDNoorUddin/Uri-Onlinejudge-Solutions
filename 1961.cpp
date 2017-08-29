#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,y,flag=0,sum;
    cin>>x>>y;
    int a[120];
    for(int i=0;i<y;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<y;i++)
    {
        if(a[i]>a[i-1])
         sum = (a[i] - a[i-1]);
        else
         sum = (a[i-1] - a[i]);
        if(sum<=x)
        flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    cout<<"YOU WIN\n";
    else
    cout<<"GAME OVER\n";
 
    return 0;
}
