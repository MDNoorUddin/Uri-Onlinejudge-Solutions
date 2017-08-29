#include <iostream>

using namespace std;

int main() {

    int a,b,sum=0,big,small;
    while(1)
    {
        cin>>a>>b;
        sum=0;
        if(a<=0||b<=0)
        break;
        else
        {
            if(a>b){
            big=a;
            small=b;
             for(int i=small;i<=big;i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"Sum="<<sum<<endl;
            }
            else if(b>a){

            big=b;
                small=a;

            for(int i=small;i<=big;i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"Sum="<<sum<<endl;
            }
            

        }

    }

    return 0;
}
