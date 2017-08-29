#include <iostream>
 
using namespace std;
 
int main() {
 
 char c;
 double a[12][12];
 double sum=0;
 cin>>c;
 for(int i=0;i<12;i++)
 {
     for(int j=0;j<12;j++)
     {
         cin>>a[i][j];
     }
 }
 for(int i=7;i<12;i++)
 {
     for(int j=12-i;j<i;j++)
     {
         sum=sum+a[i][j];
     }
 }
 if(c=='S')
 printf("%.1lf\n",sum);
 else
 printf("%.1lf\n",sum/30);
 
    return 0;
}
