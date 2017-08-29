#include <iostream>
 
using namespace std;
 
int main() {
 
    float m[12][12];
    int index;
    char c;
    cin>>index;
    cin>>c;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>m[i][j];
        }
    }
    float sum=0.0;
    for(int i=0;i<12;i++)
    {
        sum=sum+m[index][i];
    }
    if(c=='S')
    printf("%.1f\n",sum);
    if(c=='M')
    printf("%.1f\n",sum/12);
    return 0;
}
