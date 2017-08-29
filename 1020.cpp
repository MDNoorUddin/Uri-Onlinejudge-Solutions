#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int year=0,month=0,day=0;
    if(N>=365)
    {
        year=N/365;
        N=N%365;
    }
    if(N>=30)
    {
        month=N/30;
        N=N%30;
    }
    day=N;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);
    return 0;
    
}
