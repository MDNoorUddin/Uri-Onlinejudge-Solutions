#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int n,m,s;
    while(cin>>n>>m>>s){
    if(n==0&&m==0&&s==0)break;
    vector<string> str(n);
    int I=-1,J=-1;
    int position;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        for(int j=0;j<str[i].length();j++)
        {
            if(str[i][j]=='N')
            {
                I=i;J=j;
                position = 1;
               // break;
            }
            if(str[i][j]=='S')
            {
                I=i;J=j;
                position = 3;
                //break;
            }
            if(str[i][j]=='L')
            {
                I=i;J=j;
                position = 2;
                //break;
            }
            if(str[i][j]=='O')
            {
                I=i;J=j;
                position = 4;
                //break;
            }
        }
    }
    //cout<<str[I][J]<<" I="<<I<<" J="<<J<<" Position="<<position<<endl;
    //cout<<"------------------------------------------------\n";
    string command;
    cin>>command;

    int index = 0;
    int card = 0;

    for(;index<command.length();index++)
    {
        if(str[I][J]=='*')
        {
            card++;
            str[I][J]='.';
        }
        if(command[index]=='F')
        {
            if(position==1)
            {
                if(I-1>=0&&str[I-1][J]!='#')
                {
                    I--;
                }
            }
            else if(position==3)
            {
                if(I+1<n&&str[I+1][J]!='#')
                {
                    I++;
                }
            }
            else if(position==2)
            {
                if(J+1<m&&str[I][J+1]!='#')
                {
                    J++;
                }
            }
            else if(position==4)
            {
                if(J-1>=0&&str[I][J-1]!='#')
                {
                    J--;
                }
            }
        }
        else if(command[index]=='D')
        {
            if(position==1)position=2;
            else if(position==2)position=3;
            else if(position==3)position=4;
            else if(position==4)position=1;
        }

        else if(command[index]=='E')
        {
            if(position==1)position=4;
            else if(position==4)position=3;
            else if(position==3)position=2;
            else if(position==2)position=1;
        }
        //cout<<str[I][J]<<" I="<<I<<" J="<<J<<" Position="<<position<<endl;
    }
    if(str[I][J]=='*')
        {
            card++;
            str[I][J]='.';
        }
    cout<<card<<endl;
  }
    return 0;
}
