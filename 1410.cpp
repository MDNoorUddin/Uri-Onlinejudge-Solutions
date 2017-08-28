#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(cin>>n>>m){
        if(n==0&&m==0)
            break;
        int attack[100],defend[100];
        int i=0,j=0;
        for(i=0;i<n;i++)
            cin>>attack[i];
        sort(attack,attack+n);
        for(j=0;j<m;j++)
            cin>>defend[j];
        sort(defend,defend+m);
        if(attack[0]>=defend[0]&&attack[0]>=defend[1])
            cout<<"N\n";
        else if(attack[0]>=defend[1])
            cout<<"N\n";
        else
            cout<<"Y\n";
    }
    return 0;
}
