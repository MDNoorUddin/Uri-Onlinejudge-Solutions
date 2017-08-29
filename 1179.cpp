#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a1[5],a2[5];
    int count1=0,count2=0,num;
    for(int i=0;i<15;i++)
    {
        cin>>num;
        if(num%2==0)
        {
          a1[count1]=num;
          count1++;
        }
        if(num%2!=0)
        {
          a2[count2]=num;
          count2++;
        }
        if(count2==5||i==14)
        {
            for(int o=0;o<count2;o++)
            {
                printf("impar[%d] = %d\n",o,a2[o]);
            }
            count2=0;
        }
        if(count1==5||i==14)
        {
            for(int i=0;i<count1;i++)
            {
                printf("par[%d] = %d\n",i,a1[i]);
            }
            count1=0;
        }
    }
    return 0;
}
