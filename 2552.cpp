#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    while(cin>>N>>M)
    {
        int a[N][M];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
                cin>>a[i][j];
        }
        if(M==1)
        {
            if(N==1)
            {
                if(a[0][0]==1) cout<<9<<endl;
                else cout<<0<<endl;
            }
            else{
                for(int i=0;i<N;i++)
                {
                    int sum=0;
                    if(i!=N-1)
                    {
                        if(a[i][0]==1) cout<<9<<endl;
                        else
                        {
                            if(a[i+1][0]==1)
                                sum+=1;
                                cout<<sum<<endl;
                        }

                    }
                    else{
                            if(a[i][0]==1) cout<<9<<endl;
                             else{
                                if(a[i-1][0]==1)
                                sum+=1;
                          cout<<sum<<endl;
                             }
                    }
                }
            }
        }
        else if(M==2)
        {
            if(N==1)
            {
                int sum=0;
                if(a[0][0]==1)
                cout<<9;
                else
                {
                    if(a[0][1]==1)
                        cout<<1;
                    else cout<<0;
                }
                if(a[0][1]==1)
                cout<<9;
                else
                {
                    if(a[0][0]==1)
                        cout<<1;
                    else cout<<0;
                }
                cout<<endl;
            }
            else{
                for(int i=0;i<N;i++)
                {
                    for(int j=0;j<M;j++)
                    {
                        int sum=0;
                        if(a[i][j]==1) cout<<9;
                        else
                        {
                            if(j==0)
                            {
                                if(i==0)
                                {
                                    if(a[i][j+1]==1) sum+=1;
                                    if(a[i+1][j]==1) sum+=1;
                                }
                                else if(i==N-1)
                                {
                                    if(a[i][j+1]==1) sum+=a[i][j+1];
                                    if(a[i-1][j]==1) sum+=a[i-1][j];
                                }
                                else{
                                    if(a[i][j+1]==1) sum+=1;
                                    if(a[i+1][j]==1) sum+=1;
                                    if(a[i-1][j]==1) sum+=a[i-1][j];

                                }
                            }
                            else{
                                    if(i==0)
                                {
                                    if(a[i][j-1]==1) sum+=1;
                                    if(a[i+1][j]==1) sum+=1;
                                }
                            else if(i==N-1)
                                {
                                    if(a[i][j-1]==1) sum+=1;
                                    if(a[i-1][j]==1) sum+=1;
                                }
                                else{
                                    if(a[i][j-11]==1) sum+=1;
                                    if(a[i+1][j]==1) sum+=1;
                                    if(a[i-1][j]==1) sum+=1;

                                }
                            }
                            cout<<sum;
                        }

                    }
                    cout<<endl;
                }
            }
        }
        else{
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                int sum=0;
                if(a[i][j]==1)
                    cout<<9;
                else{
                    if(j==0)
                    {
                        if(i==0)
                        {
                            if(a[i][j+1]==1) sum+=a[i][j+1];
                            if(a[i+1][j]==1) sum+=a[i+1][j];
                        }
                        else if(i==N-1)
                        {
                            if(a[i][j+1]==1) sum+=a[i][j+1];
                            if(a[i-1][j]==1) sum+=a[i-1][j];
                        }
                        else
                        {
                            if(a[i][j+1]==1) sum+=a[i][j+1];
                            if(a[i-1][j]==1) sum+=a[i-1][j];
                            if(a[i+1][j]==1) sum+=a[i+1][j];
                        }
                    }
                    else if(j<M-1)
                    {
                        if(i==0)
                        {
                            if(a[i][j+1]==1) sum+=a[i][j+1];
                            if(a[i+1][j]==1) sum+=a[i+1][j];
                            if(a[i][j-1]==1) sum+=a[i][j-1];
                        }
                        else if(i==N-1)
                        {
                            if(a[i][j+1]==1) sum+=a[i][j+1];
                            if(a[i-1][j]==1) sum+=a[i-1][j];
                            if(a[i][j-1]==1) sum+=a[i][j-1];
                        }
                        else
                        {
                            if(a[i][j+1]==1) sum+=a[i][j+1];
                            if(a[i+1][j]==1) sum+=a[i+1][j];
                            if(a[i][j-1]==1) sum+=a[i][j-1];
                            if(a[i-1][j]==1) sum+=a[i-1][j];
                        }
                    }
                    else{
                        if(i==0)
                        {
                            if(a[i][j-1]==1) sum+=a[i][j-1];
                            if(a[i+1][j]==1) sum+=a[i+1][j];
                        }
                        else if(i==N-1)
                        {
                            if(a[i][j-1]==1) sum+=a[i][j-1];
                            if(a[i-1][j]==1) sum+=1;
                        }
                        else
                        {
                            if(a[i][j-1]==1) sum+=1;
                            if(a[i-1][j]==1) sum+=1;
                            if(a[i+1][j]==1) sum+=1;
                        }
                    }
                    cout<<sum;
                }
            }
            cout<<endl;
        }
        }
    }
    return 0;
}
