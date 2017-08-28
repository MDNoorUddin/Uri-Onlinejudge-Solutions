#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        int N;
        cin>>N;
        int a[N],b[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+N,greater<int>());
        int count=0;
        for(int i=0;i<N;i++)
        {
            if(a[i]==b[i])
                count++;
        }
        cout<<count<<endl;
        cin.ignore();
    }
    return 0;

}
