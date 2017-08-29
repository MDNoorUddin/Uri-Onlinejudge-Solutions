#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    int N;
    cin>>N;
    cin.ignore();
    while(N-->0)
    {
        cin>>x;
        int i,j,k,flag=0;
        for(i=0,j=0,k=0;i<x.length();i++)
        {
            if(x[i]=='<'){
                j++;
            }
            if(x[i]=='>'){
            if(j > 0){
                 k++;
                 j--;
                                    }
}
        }
        cout<<k<<endl;
    }
}
