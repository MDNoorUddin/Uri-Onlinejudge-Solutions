#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int m,l;
        cin>>m>>l;
        vector<int>M[m];
        vector<int>L[l];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int a;
                cin>>a;
                M[i].push_back(a);
            }
        }
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<n;j++)
            {
                int a;
                cin>>a;
                L[i].push_back(a);
            }
        }
        int MM,LL;cin>>MM>>LL;
        int A;
        cin>>A;
        long long s=M[MM-1][A-1];
        long long S=L[LL-1][A-1];
        if(s>S) cout<<"Marcos\n";
        else if(s<S) cout<<"Leonardo\n";
        else cout<<"Empate\n";
    }
    return 0;
}
