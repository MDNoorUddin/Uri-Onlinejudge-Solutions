#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define ps() cout <<" ";

/**  '' "\n" ^ **/
int main() {
    int n;

    while(cin>>n)
    {
        if(n==0)break;
        char a[300][300];
        //cout<<11111111<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                //cout<<i<<endl;;
                a[i][j]='O';
            }
        }
        //cout<<222<<endl;
        int I=(n/2);
        int J=(n/2);

        for(int ii=1;ii<=n*n;ii++)
        {
            //cout<<I;ps();cout<<J<<endl;
            for(int i=0;i<n;i++)
              {
              for(int j=0;j<n;j++)
              {
                  if(I==i&&j==J)
                   {
                     cout<<'X';
                     a[i][j]='.';
                  }
                  else cout<<'O';
               }
               cout<<endl;
            }
            cout<<'@'<<endl;

            /*for(int i=0;i<n;i++)
              {
              for(int j=0;j<n;j++)
              {
                  cout<<a[i][j];
               }
               cout<<endl;
            }
            cout<<'@'<<endl;*/
            int l=0,r=0,d=0,u=0;
            if(I+1<n&&a[I+1][J]!='.')
            d++;
            if(I-1>=0&&a[I-1][J]!='.')
            u++;
            if(J+1<n&&a[I][J+1]!='.')
            r++;
            if(J-1>=0&&a[I][J-1]!='.')
            l++;
            if(d&&u&&l&&r&&J+1<n)
            {
                J++;
                continue;
            }
            if(d&&u&&r&&I-1>=0)
            {
                I--;
                continue;
            }
            if(u&&l&&r&&J-1>=0)
            {
                J--;
                continue;
            }
            if(u&&l&&d&&I+1<n)
            {
                I++;
                continue;
            }
            if(r&&l&&d&&J+1<n)
            {
                J++;
                continue;
            }



            if(u&&d&&I-1>=0)
            {
                I--;
                continue;
            }
            if(u&&l&&J-1>=0)
            {
                J--;
                continue;
            }
            if(l&&r&&J+1<n)
            {
                J++;
                continue;
            }
            if(d&&l&&I+1<n)
            {
                I++;
                continue;
            }
            if(r&&d&&J+1<n)
            {
                J++;
                continue;
            }


            if(u)
            {
                I--;
                continue;
            }
            if(d)
            {
                I++;
                continue;
            }
            if(l)
            {
                J--;
                continue;
            }
            if(r)
            {
                J++;
                continue;
            }
        }
    }
}
