#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        char c;
        int a,b;
        cin>>a>>c>>b;
        int A,B;
        cin>>B>>c>>A;
        if(a+A>b+B)
        {
            cout<<"Time 1\n";
        }
        else if(a+A<b+B)
        {
            cout<<"Time 2\n";
        }
        else{
            if(A<b)
                cout<<"Time 2\n";
            else if(A>b)
                cout<<"Time 1\n";
            else{
                cout<<"Penaltis\n";
            }
        }
    }
    return 0;
}
