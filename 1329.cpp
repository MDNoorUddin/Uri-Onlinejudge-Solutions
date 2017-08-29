#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;
    while(n!=0)
    {
        int r;
        int m=0,a=0;
        for(int i=1;i<=n;i++)
        {
            cin>>r;
            if(r==0)
            m+=1;
            else
            a+=1;
        }
        cout<<"Mary won "<<m<<" times and John won "<<a<<" times\n";
        cin>>n;
    }

    return 0;
}
