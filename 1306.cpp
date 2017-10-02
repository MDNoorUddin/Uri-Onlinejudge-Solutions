#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int I=1;
    while(cin>>a>>b&&a&&b)
    {
        if(a<=b)printf("Case %d: 0\n",I++);
        else
        {
            int d=a/b;
            if(d>=27)
            {
                if(d>27)
                printf("Case %d: impossible\n",I++);
                else
                {
                    if(a%b==0){
                        d--;
                      printf("Case %d: %d\n",I++,d);
                    }
                    else
                    {
                         printf("Case %d: impossible\n",I++);
                    }
                }
            }
            else
            {
                if(a%b==0)
                    d--;
                printf("Case %d: %d\n",I++,d);

            }
        }
    }
}
