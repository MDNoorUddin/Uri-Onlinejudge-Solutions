#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
    string x,y;
    cin>>x>>y;
    //if(x.length()>y.length())
        //swap(x,y);
    string z;
    int i=0,I=x.length();
    int j=0,J=y.length();
    int k;
    for(i=0;i<x.length()&&j<y.length();)
    {
        z=z+x[i++];
        z=z+y[j++];
    }
    while(i<I)
    {
        z=z+x[i];
        i++;
    }

    while(j<J)
    {
        z=z+y[j];
        j++;
    }
    cout<<z<<endl;
    }
    return 0;
}
