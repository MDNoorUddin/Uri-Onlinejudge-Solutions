#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a[12];
        int N;
        cin>>N;
        for(int j=0;j<N;j++)
        {
            cin>>a[j];
        }
        cout<<"Case "<<i<<": "<<a[N/2]<<endl;

    }
    return 0;
}
