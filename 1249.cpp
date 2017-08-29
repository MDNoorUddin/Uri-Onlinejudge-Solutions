#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[1000];
     while(gets(str)!= NULL)
     {
         for(int i=0;i<strlen(str);i++)
         {
             if(str[i]>='A'&&str[i]<='Z')
             {
                 if(str[i]<'N')
                    str[i]=str[i]+13;
                 else
                    str[i]=str[i]+13-26;
             }
             if(str[i]>='a'&&str[i]<='z')
             {
                 if(str[i]<'n')
                    str[i]=str[i]+13;
                 else
                    str[i]=str[i]+13-26;
             }
         }
         cout<<str<<endl;
     }
    return 0;
}
