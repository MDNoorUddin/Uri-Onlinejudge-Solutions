#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[12][12];
    string c;
    cin>>c;
    float ad=0.0;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(j<i)
                ad+=a[i][j];
        }
    }
    if(c=="S")printf("%.1f\n",ad);
    else printf("%.1f\n",ad/66);
    return 0;
}
