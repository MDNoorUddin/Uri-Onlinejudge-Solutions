#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[6];
        bool dice=true;
        bool Find[7];
        for(int i=0;i<=6;i++)
            Find[i]=false;
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
            if(a[i]<1||a[i]>6)
                dice=false;
            else{
                    if(!Find[a[i]])
                    Find[a[i]]=true;
                    else dice=false;
            }

        }
        if(dice)
        {
            if((a[0]+a[5]==7)&&(a[1]+a[3]==7)&&(a[2]+a[4]==7))
                cout<<"SIM\n";
            else cout<<"NAO\n";
        }
        else cout<<"NAO\n";
    }
}
