#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("c.txt","w",stdout);
    int t;
    while(cin>>t&&t)
    {
        int x,y;
        cin>>x>>y;
        int a,b;
        while(t--)
        {
            cin>>a>>b;
            if(x==a||y==b)printf("divisa\n");
            else
            {
                if(a>x)
                {
                    if(b>y)printf("NE\n");
                    else printf("SE\n");
                }
                else{
                    if(b>y)printf("NO\n");
                    else printf("SO\n");
                }
            }
        }
    }
    return 0;
}
