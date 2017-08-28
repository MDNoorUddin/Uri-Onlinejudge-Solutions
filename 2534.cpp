#include<bits/stdc++.h>
using namespace std;
int main(){
    int n[100];
    int q;
    int N,Q;
    while(cin>>N>>Q)
    {
        for(int i=0;i<N;i++)
            cin>>n[i];
        sort(n,n+N,greater<int>());
        for(int i=0;i<Q;i++)
        {
            cin>>q;
            cout<<n[q-1]<<endl;
        }
    }
    return 0;
}
