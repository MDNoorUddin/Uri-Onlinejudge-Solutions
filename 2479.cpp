#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str1[n];
    //string str2[n];
    string str;
    char c;
    int I=0,J=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>c>>str;
        if(c=='+')
            //str1[I++]=str;
            I++;
        else
            J++;
            str1[count++]=str;
    }
    //sort(str1,str1+count);
    //sort(str2,str2+J);
    for(int i=0;i<count-1;i++)
    {
        int ptr=0;
        while(ptr<count-i-1)
        {
            if(str1[ptr]>str1[ptr+1])
            {
                swap(str1[ptr],str1[ptr+1]);
            }
            ptr++;
        }
    }/*
    for(int i=0;i<J-1;i++)
    {
        int ptr=0;
        while(ptr<J-i-1)
        {
            if(str2[ptr][0]>str2[ptr+1][0])
            {
                swap(str2[ptr],str2[ptr+1]);
            }
            ptr++;
        }
    }*/
    /*for(int i=0;i<I;i++)
        cout<<str1[i][0]<<endl;
    for(int i=0;i<J;i++)
        cout<<str2[i]<<endl;*/
    for(int i=0;i<count;i++)
        cout<<str1[i]<<endl;
    printf("Se comportaram: %d | Nao se comportaram: %d\n",I,J);
    return 0;
}
