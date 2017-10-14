#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  while(getline(cin,str))
  {
      long long sum=0;
      for(int i=0;i<str.length();i++)
      {
          if(str[i]>=65&&str[i]<=90)
          {
              int f=(str[i]-64)%9;
              if(f==0)
                f=9;
              sum+=f;
          }
          if(str[i]>=97&&str[i]<=122)
          {
              int f=(str[i]-96)%9;
              if(f==0)
                f=9;
              sum+=f;
          }
      }
      long long copy=sum;
      while(true)
      {
          if(copy<10)
            break;
          long long h=0;
          while(copy!=0)
          {
              h+=(copy%10);
              copy=copy/10;
          }
          copy=h;
      }
      printf("%d\n",copy);
  }
}
