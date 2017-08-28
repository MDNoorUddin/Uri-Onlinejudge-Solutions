#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    int a[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            cin>>a[i][j];
    }
    int x_axis=0,y_axis=0;
    bool x=false;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(a[i][j]==42)
            {
                if(i==0||i==N-1||j==0||j==M-1)
                {
                    //x=true;
                    continue;
                }
                else
                {
                    if(a[i-1][j-1]==7&&a[i-1][j]==7&&a[i-1][j+1]==7&&a[i][j-1]==7&&a[i][j+1]==7&&a[i+1][j-1]==7&&a[i+1][j]==7&&a[i+1][j+1]==7)
                    {
                        x_axis=i+1;
                        y_axis=j+1;
                    }
                }

            }
        }
    }
    cout<<x_axis<<" "<<y_axis<<endl;
    return 0;
}
