#include<iostream>
using namespace std;
int main()
{
    int N;
    int hours=0,minutes=0,seconds=0;
    cin>>N;
    if(N>=60)
    {
        minutes=N/60;
        N=N%60;
    }
    if(N>=1){
        seconds=N;
    }
    if(minutes>=60)
    {
        hours=minutes/60;
        minutes=minutes%60;
    }
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}
