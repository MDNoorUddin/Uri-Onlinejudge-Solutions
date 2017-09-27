#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(b.length()>a.length())
        {
            cout<<"nao encaixa\n";
        }
        else{
                int counter=0;
            for(int i=a.length()-1,j=b.length()-1;i>=0&&j>=0;i--,j--)
            {
                if(a[i]!=b[j])break;
                counter++;
            }
            if(counter==b.length())
                cout<<"encaixa\n";
            else cout<<"nao encaixa\n";
        }
    }
}
