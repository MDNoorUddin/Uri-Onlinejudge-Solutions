#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int votes=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        votes+=a[i];
    }
    sort(a,a+n);
    double x,y,Z;
    int p=n-1;
    x=(45*votes*1.00)/100;
    y=(40*votes*1.00)/100;
    Z=(10*votes*1.00)/100;
    if(a[n-1]>=x)
        cout<<"1\n";
    else if(a[p]<y)
        cout<<"2\n";
    else if(a[n-1]>=y)
    {
        bool z=false;
        double div;
        for(int i=0;i<n-1;i++)
        {
            //Z=(10*a[i]*1.00)/100;
            div=a[p]-a[i];
            if(div>=Z)
            {
                continue;
            }
            else
            {
                z=true;
                break;
            }
        }
        if(z)
            cout<<"2\n";
        else
            cout<<"1\n";
    }
    return 0;
}


