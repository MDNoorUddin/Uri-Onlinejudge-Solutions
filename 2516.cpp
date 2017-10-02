#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s,va,vb;
    while(cin>>s>>va>>vb)
    {
        if(va<=vb)cout<<"impossivel\n";
        else
        {
            double time=s/(va-vb)*1.00;
            printf("%.2lf\n",time);
        }
    }
}
