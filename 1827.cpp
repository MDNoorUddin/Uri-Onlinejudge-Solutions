#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int size=n/3;
        bool x=false;
        for(int i=0;i<n;i++)
        {
            if(i==size)
                x=true;
            if(n-i==size)
                x=false;
        if(!x){
            for(int j=0;j<n;j++)
            {
                if(n-1-j==i){
                    cout<<3;
                    continue;
                    }
                if(i==j){
                        cout<<2;
                    }
                    else{
                        cout<<0;
                        continue;
                    }
            }
            cout<<endl;
        }
        else
        {
           for(int j=0;j<n;j++)
           {
               if(i==n/2&&j==n/2)
                cout<<4;
               else if(j<size)
                cout<<0;
                else if(n-1-j<size)
                    cout<<0;
                else
                cout<<1;
           }
           cout<<endl;
        }
        }
        cout<<endl;
    }
    return 0;
}

