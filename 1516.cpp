#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x[100];
    int N,M;
    while(cin>>N>>M&&N&&M)
    {
        cin.ignore();
        for(int i=0;i<N;i++){
           cin>>x[i];
           //cout<<x[i];
        }
    int n,m;
    cin>>n>>m;
    int height=(n/N);
    int width=(m/M);
    for(int i=0;i<N;i++)/**for main index*/
    {
        string temp=x[i];
        //cout<<"i\n";
        for(int j=0;j<height;j++)
        {
            //cout<<"h\n";
            for(int k=0;k<temp.length();k++)
            {
                //cout<<"width\n";
                for(int print=1;print<=width;print++){
                    //cout<<"print\n";
                    cout<<temp[k];
                }
            }
            cout<<endl;
        }

    }
    cout<<endl;
    }
    return 0;
}
