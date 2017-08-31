#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n)
    {

        int c=0;
        while(true)
        {
            bool f=false;
            int x;
            for(int i=1;i<=n;i++)
            {
                cin>>x;
                if(x!=i) f=true;
            }
            c++;
            if(!f) break;
        }
        cout<<c<<endl;
    }
    return 0;
}
