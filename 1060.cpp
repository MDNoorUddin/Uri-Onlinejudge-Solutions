#include <iostream>
 
using namespace std;
 
int main() {
 
    double num[6],positive=0;
    for(int i=0;i<6;i++)
    {
        cin>>num[i];
        if(num[i]>0)
        positive++;
    }
    cout<<positive<<" valores positivos\n";
 
    return 0;
}
