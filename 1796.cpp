#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    cin>>t;
        int a,c1=0,c2=0;
        for(int i=0;i<t;i++)
        {
            cin>>a;
            if(a==0)
            c1++;
            if(a==1)
            c2++;
            
        }
        if(c1>c2)
        cout<<"Y"<<endl;
        else
        cout<<"N"<<endl;
 
    return 0;
}
