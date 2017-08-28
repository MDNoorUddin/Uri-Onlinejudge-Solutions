#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int cas=1;
   while(n!=0)
   {
       int a[n],b[n],c[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i]>>b[i];
           //c[i]=b[i];
       }
       int k=0;
       //sort(c,c+n);
       while(k<n)
       {
           int ptr=0;
           while(ptr<n-k-1)
           {
               if(b[ptr]>b[ptr+1])
               {
                   int temp;
                   temp=b[ptr];
                   b[ptr]=b[ptr+1];
                   b[ptr+1]=temp;
                   temp=a[ptr];
                   a[ptr]=a[ptr+1];
                   a[ptr+1]=temp;
               }
               ptr++;
           }
           k++;
       }
       int count=0,l=0;
       for(int i=n-1;i>=1;i--)
       {
           if(b[i]==b[i-1])
            count++;
           else
            break;
       }
       for(int i=-1,j=n-1;i<count;i++,j--)
       {
           c[l++]=a[j];
       }
       cout<<"Turma "<<cas++<<endl;
       for(int i=l-1;i>=0;i--)
       cout<<c[i]<<" ";

       cout<<endl<<endl;
       cin>>n;

   }
}
