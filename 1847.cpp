#include<bits/stdc++.h>
using namespace std;
int main()
{
       int a,b,c;
       cin>>a>>b>>c;
       if(b>a&&c<=b)
             printf(":(\n");
       else if(b>a&&c>b&&(c-b)<(b-a))
             printf(":(\n");
       else if(b>a&&c>b&&(c-b)>=(b-a))
              printf(":)\n");
      else if(b<a&&c<b&&(b-c)<(a-b))
              printf(":)\n");
      else if(b<a&&c<b&&(b-c)>=(a-b))
              printf(":(\n");
      else if((a==b)&&c>b)
              printf(":)\n");
       else if((a==b)&&c<b)
              printf(":(\n");
       else if(b<a&&c>=b)
             printf(":)\n");
       else
             printf(":(\n");
return 0;
}
