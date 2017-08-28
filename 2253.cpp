#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    char str[100];
    while(gets(str)){
           bool x=false,y=false,z=false;
           int length=strlen(str);
          if(length<6||length>32)
           cout<<"Senha invalida.\n";
          else{
            bool p=true;
            for(int i=0;i<length;i++){
                    if(str[i]>=65&&str[i]<=90)
                          x=true;
                    else if(str[i]>=97&&str[i]<=122)
                          y=true;
                     else if(str[i]>=48&&str[i]<=57)
                          z=true;
                      else{
                         p=false;
                          break;
                      }
             }
            if(x&&y&&z&&p)
                cout<<"Senha valida.\n";
            else
            cout<<"Senha invalida.\n";
           }
       }
   return 0;
}
