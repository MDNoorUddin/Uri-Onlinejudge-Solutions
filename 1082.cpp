#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase=1;
    int nodes,edges;
    int sev;
    cin>>sev;
    while(sev--){
        cin>>nodes>>edges;
        char a[nodes][nodes];
        memset(a,'#',sizeof(a));
        char u,p;
        for(int i=0;i<nodes;i++)
        {
            a[i][0]=i+97;
        }
        while(edges--)
        {
            cin>>u>>p;
            int z=u-97,Z=p-97;
            a[z][Z]=p;
            a[Z][z]=u;
        }
        printf("Case #%d:\n",testCase++);
        int v[nodes];
        memset(v,-1,sizeof(v));
        int Count=0;
        for(int i=0;i<nodes;i++)
        {
            bool line=false;
            stack<char> t;
            if(v[i]==-1){
            t.push(i+97);
            Count++;
            v[i]=1;
            line=true;
            }
            stack<char> Copy;
            int CP=0;
            while(!t.empty()){
                  char d=t.top();
                  if(CP!=0)
                  Copy.push(d);
                  else cout<<d<<",";
                  t.pop();
                  CP++;
            for(int j=0;j<nodes;j++)
            {
                if(a[d-97][j]!='#')
                {
                    if(v[a[d-97][j]-97]==-1)
                    {
                        line=true;
                        v[a[d-97][j]-97]=1;
                        t.push(a[d-97][j]);

                    }
                }
            }
            }vector<char> s;
            while(!Copy.empty())
            {
                char tp=Copy.top();
                s.push_back(tp);Copy.pop();
            }
            sort(s.begin(),s.end());
            for(int i=0;i<s.size();i++)cout<<s[i]<<",";
            if(line)
            cout<<endl;
        }
        printf("%d connected components\n",Count);
        cout<<endl;
    }
    return 0;
}



