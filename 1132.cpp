#include <iostream>

using namespace std;

int main() {

    int a,b;
    int sum=0;
    cin>>a>>b;
    if(b<a)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++)
    {
        if(i%13!=0)
        sum=sum+i;
    }
    cout<<sum<<endl;

    return 0;
}
