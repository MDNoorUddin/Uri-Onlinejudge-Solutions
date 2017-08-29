#include <iostream>

using namespace std;

int main() {

    int count=0;
    for(int i=1,j=7;;j--,count++)
    {
        if(count!=0&&count%3==0)
        {
            i+=2;
            j=7;
        }
        cout<<"I="<<i<<" "<<"J="<<j<<endl;
        count++;
        if(i==9&&j==5)
        break;
    }

    return 0;
}
