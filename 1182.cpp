#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[12][12];
    char c;
    int column;
    cin>>column;
    cin>>c;
    float ad=0.0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(j==column)ad+=a[i][j];
        }
    }
    if(c=='s')printf("%.1f\n",ad);
    else printf("%.1f\n",ad/12);
    return 0;
}
