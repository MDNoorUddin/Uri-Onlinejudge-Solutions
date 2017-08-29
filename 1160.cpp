#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        int small, big;
        double rate1 , rate2;
        double city1=0,city2=0;
        int year=1;
        cin >> small >> big;
        cin >> rate1 >> rate2;
        while(true)
        {
            city1=(rate1*small)/100;
            city2=(rate2*big)/100;
            small=small+city1;
            big=big+city2;
            if(small>big){
                cout<<year<<" anos.\n";
                break;
            }
            else
                year++;
            if(year>100){
                cout<<"Mais de 1 seculo.\n";
                break;
            }
        }
    }
    return 0;
}
