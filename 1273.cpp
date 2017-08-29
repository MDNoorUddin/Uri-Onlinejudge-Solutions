#include <iostream>
#include<string>
using namespace std;

int main() {

string x[50];
int l=0;
int t,flag=0;
while(1)
{
    cin>>t;
    if(t==0)
        break;
        if(flag==1)
        cout<<endl;
        int f=t;
       // while(t-->0)
        //{
            for(int j=0;j<f;j++){
            cin>>x[j];
            if(x[j].length()>l)
                l=x[j].length();
            }
            for(int i=0;i<f;i++)
            {
                int g=x[i].length();
                for(int v=g;v<l;v++)
                    cout<<" ";
                cout<<x[i]<<endl;
            }

        //}
        l=0;
        flag=1;
}
return 0;
}
