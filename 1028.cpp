#include <iostream>

using namespace std;

int main() {

    int t,small,l,a,b,r,large;
    cin>>t;
    cin.ignore();
    while(t-->0)
    {
        cin>>a>>b;
        if(a<=b){
        small=a;
        large=b;
        }
        else{
        small=b;
        large=a;
        }
        while(true)
        {
            if(large%small==0){
            l=small;
            break;
            }
            else{
                    int temp=large;
                large=small;
                small=temp%small;

            }
        }
        cout<<l<<endl;
    }

    return 0;
}
