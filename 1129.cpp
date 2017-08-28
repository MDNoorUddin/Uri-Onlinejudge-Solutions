#include<iostream>
#include<string>

using namespace std;
int main()
{
    int t;
    cin>>t;
    char b[5];
    b[0]='A';
    b[1]='B';
    b[2]='C';
    b[3]='D';
    b[4]='E';
    while(t!=0)
    {
        while(t--)
        {
            int a[5];
            int flag=0;
            int low=0;
            for(int i=0;i<5;i++)
            {
                cin>>a[i];
                if(a[i]<=127)
                {
                    flag++;
                    if(flag==1)
                    low=i;
                }
            }
            if(flag==1)
                cout<<b[low]<<endl;
            else
                cout<<"*"<<endl;
        }

        cin>>t;
    }
}
