#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>a;
        //set<long long>::iterator x;
        for(int i=0;i<n;i++){
            int y;
                cin>>y;
                a.insert(y);

        }
        int count;
        count=a.size();
        cout<<count<<endl;
}
return 0;
}
