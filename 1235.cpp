#include<iostream>
using namespace std;
int main()
{
    string a;
    int mid,t,i;
    cin>>t;
    cin.ignore();
    for(int j=1;j<=t;j++)
    {
        getline(cin,a);
        for(i=(a.length()/2)-1;i>=0;i--)
            cout<<a[i];
        for(i=(a.length())-1;i>=a.length()/2;i--)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}
