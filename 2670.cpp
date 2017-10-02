#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> time(3);
    time[0]=(b*2)+(c*4);
    time[1]=(a*2)+(c*2);
    time[2]=(b*2)+(a*4);
    sort(time.begin(),time.end());
    cout<<time[0]<<endl;
    return 0;
}
