#include <iostream>
 
using namespace std;
 
int main() {
 
    int a[100];
    int h,p;
    for(int i=0;i<100;i++)
    {
        cin>>a[i];
    }
    h=a[0];
    p=0;
    for(int i=0;i<99;i++)
    {
        if(a[i+1]>h)
        {
            h=a[i+1];
            p=i+1;
        }
    }
    cout<<h<<endl<<p+1<<endl;
 
    return 0;
}
