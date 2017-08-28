
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N;
    while(cin>>T>>N&&T)
    {
        int totalPoints=3*N;
        int matchDraw=0;
        for(int i=0;i<T;i++)
        {
            string str;
            int point;
            cin>>str>>point;
            matchDraw+=point;
        }
        cout<<totalPoints-matchDraw<<endl;
    }
    return 0;
}
