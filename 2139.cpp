#include <iostream>

using namespace std;

int main() {

    int a,b;
    while(cin>>a>>b)
    {
        int c;
        if(a==1)
        {
            c=360-b;
        }
        if(a==2)
        {
            c=360-b-31;
        }
        if(a==3)
        {
            c=360-b-31-29;
        }
        if(a==4)
        {
            c=360-b-31-29-31;
        }
        if(a==5)
        {
            c=360-b-31-29-31-30;
        }
        if(a==6)
        {
            c=360-b-31-29-31-30-31;
        }
        if(a==7)
        {
            c=360-b-31-29-31-30-31-30;
        }
        if(a==8)
        {
            c=360-b-31-29-31-30-31-30-31;
        }
         if(a==9)
        {
            c=360-b-31-29-31-30-31-30-31-31;
        }
         if(a==10)
        {
            c=360-b-31-29-31-30-31-30-31-31-30;
        }
         if(a==11)
        {
            c=360-b-31-29-31-30-31-30-31-31-30-31;
        }
          if(a==12)
        {
            c=360-b-31-29-31-30-31-30-31-31-30-31-30;
        }

        if(c==0)
        cout<<"E natal!\n";
        if(c==1)
        cout<<"E vespera de natal!\n";
        if(c>1)
        cout<<"Faltam "<<c<<" dias para o natal!\n";
        if(c<0)
        cout<<"Ja passou!\n";
    }


    return 0;
}
