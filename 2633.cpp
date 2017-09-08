#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin>>t)
    {
        vector<pair<string,int> > x;
        string h;int j;
        while(t--)
        {
            cin>>h>>j;
            x.push_back(make_pair(h,j));
        }
        for(int i=0;i<x.size();i++)
        {
            int ptr=0;
            while(ptr<x.size()-i-1)
            {
                if(x[ptr].second>x[ptr+1].second)
                    swap(x[ptr],x[ptr+1]);
                ptr++;
            }
        }
        for(int i=0;i<x.size()-1;i++)
            cout<<x[i].first<<" ";
            cout<<x[x.size()-1].first;
        cout<<endl;
    }
    return 0;
}
