#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t-->0)
    {
        int n;
        cin>>n;
        int num;
        cin>>num;
        int c[n];
        for(int i=0;i<n;i++)
        {
            unsigned int z;
            cin>>z;
            if(num>=z)
            {
                c[i]=num-z;
            }
            else
            {
                c[i]=z-num;
            }
        }
        int l=c[0];
        int r;
        for(int i=1;i<n;i++)
        {
            if(c[i]<l){
                l=c[i];
        }

        }
        for(int i=0;i<n;i++)
        {
            if(l==c[i]){
                r=i;
                break;
            }
        }
        cout<<r+1<<endl;

    }
    return 0;
}
