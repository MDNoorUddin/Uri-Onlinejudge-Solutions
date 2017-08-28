#include<bits/stdc++.h>

using namespace std;

int main()
{
    string message;
    while(cin>>message)
    {
        int numberOfCommands;
        cin>>numberOfCommands;
        int index;
        for(int inner=0;inner<numberOfCommands;inner++)
        {
            cin>>index;cout<<message[index-1];
        }
        cout<<endl;
    }
    return 0;
}
