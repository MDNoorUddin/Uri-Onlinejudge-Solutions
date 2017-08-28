#include<iostream>
using namespace std;
int main()
{
   int a;
   cin>>a;
   while(a--){
        int x,y;
        cin>>x>>y;
        x=x+y;
        if(x==0)
             cout<<"PROXYCITY\n";
      else if(x==1)
             cout<<"P.Y.N.G.\n";
     else if(x==2)
             cout<<"DNSUEY!\n";
       else if(x==3)
             cout<<"SERVERS\n";
      else if(x==4)
             cout<<"HOST!\n";
     else if(x==5)
             cout<<"CRIPTONIZE\n";
    else if(x==6)
             cout<<"OFFLINE DAY\n";
    else if(x==7)
             cout<<"SALT\n";
    else if(x==8)
             cout<<"ANSWER!\n";
    else if(x==9)
             cout<<"RAR?\n"; 
    else if(x==10)
             cout<<"WIFI ANTENNAS\n";
    }
    return 0;
}
