#include<iostream>
using namespace std;
int prime(int p)
{
    if(p==2)
        return 2;
    else
    {
        int flag=0;
        for(int i=p;i>0;i--)
        {
            for(int z=2;z<=i/2;z++)
            {
                if(i%z==0){
                        flag=0;
                    break;
                }
                else
                    flag=1;

        }
        if(flag==1)
            return i;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int t=prime(n);
    int h=prime(m);
    cout<<t*h<<endl;
}
