#include<iostream>
using namespace std;
int main()
{
    int x,y,r=0;
    cin>>x;
    for(int i=1;i<=5;i++)
    {
        cin>>y;
        if(y==x)
        r++;
    }
    cout<<r<<endl;
}
