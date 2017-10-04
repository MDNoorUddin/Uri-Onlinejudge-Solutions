#include<bits/stdc++.h>
using namespace std;
int m;
bool comp (int a, int b){
    if (b%m == a%m)
        if(abs(a)%2 ==abs(b)%2){
            if (a%2 != 0){
                return a > b;
            }else{ 
                return b > a;
            }
        }
        return abs(a)%2 > abs(b)%2; 
    }
    return a%m < b%m;
}
int main()
{
    int n;

    while(cin>>n>>m&&n&&m){
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,comp);
    cout<<n<<" "<<m<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    }
    printf("0 0\n");
}
