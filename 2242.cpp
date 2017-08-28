#include<iostream>
using namespace std;
int main()
{
    string x,y,z;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
        y=y+x[i];
    }
    for(int i=x.length()-1;i>=0;i--){
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
        z=z+x[i];
    }
    if(y==z)
        cout<<"S\n";
    else
        cout<<"N\n";
    return 0;
}
