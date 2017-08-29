#include <iostream>
#include<stdio.h>
using namespace std;

int main() {

     int n;
     int a[500];
     while((scanf("%d",&n))!=EOF)
     {
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         int big;
         big=a[0];
         for(int i=1;i<n;i++)
         {
             if(a[i]>big)
             big=a[i];
         }
         if(big<10)
         cout<<1<<endl;
         if(big>=10&&big<20)
         cout<<2<<endl;
         if(big>=20)
         cout<<3<<endl;
     }


    return 0;
}
