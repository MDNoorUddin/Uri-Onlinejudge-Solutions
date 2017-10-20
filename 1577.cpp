#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
              cin>>n;
             if(n%3==0)
                n=n/3;
                if(n%5==0)
                n=n/5;
                if(n%17==0)
                n=n/17;
                if(n%257==0)
                n=n/257;
                if(n%65537==0)
                n=n/65537;
              for(int i=0;;i++)
              {
                      if(n==(int)pow(2.0,(double)i))
                      {
                             cout<<"Yes"<<endl;
                             break;
                      }
                      else if(n<(int)pow(2.0,(double)i))
                      {
                           cout<<"No"<<endl;
                           break;
                      }
              }
    }
    return 0;
}
