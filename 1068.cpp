#include<iostream>
using namespace std;
int main()
{
        string X;
        while(cin>>X){
        //int forward=0,backword=0;
        int forward=0;
        bool x=false;
        for(int i=0;i<X.length();i++)
        {
            if(X[i]=='('){
                x=true;
                forward++;
            }
            if(X[i]==')')
            {
                if(forward==0)
                    x=false;
                if(x)
                forward--;
                else
                forward++;


        }
        }
        if(forward==0)
        {
            cout<<"correct\n";
        }
        else
        {
            cout<<"incorrect\n";
        }
    }

     return 0;
}
