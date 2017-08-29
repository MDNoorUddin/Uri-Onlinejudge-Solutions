#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5];
    for(int i=0;i<5;i++)
    cin>>a[i];
    for(int i=0;i<5;i++)
    cin>>b[i];
    int i=0;
    bool x=true;
    while(i<5)
    {
        if(a[i]==b[i])
        {
            x=false;
            break;
        }
        i++;
    }
    if(x)
    cout<<"Y\n";
    else
    cout<<"N\n";
}
