#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
long long fact(int len);
int main()
{
    string a;
    cin>>a;
    //scanf("%s",a);
    while(a!="0")
    {
        int len=0,i;
        len=a.length();
        /*or(i=0;i<strlen(a);i++)
        {
            if(a[i]==' ')
                len--;
        }*/
        long long z;
        z=fact(len);
        cout<<z<<endl;
        cin>>a;
        //scanf("%s",a);
    }
    return 0;
}
long long fact(int len)
{
    if(len==0||len==1)
        return 1;
    else if(len==2)
        return 2;
    else if(len==3)
        return 6;
    else if(len==4)
        return 24;
     else if(len==5)
        return 120;
     else if(len==6)
        return 720;
     else if(len==7)
        return 5040;
      else if(len==8)
        return 40320;
    else if(len==9)
        return 362880;
    else if(len==10)
        return 3628800;
     else if(len==11)
        return 39916800;
     else if(len==12)
        return 479001600;
     else if(len==13)
        return 6227020800;
        else if(len==14)
        return 87178291200;
     else if(len==15)
        return 1307674368000;


}



