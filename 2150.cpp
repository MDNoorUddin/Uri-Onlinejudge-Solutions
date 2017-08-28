#include <iostream>

using namespace std;

int main() {

    string x,y;
    while(cin>>x)
    {
        cin.ignore();
        getline(cin,y);
        int count=0;
        for(int i=0;i<x.length();i++)
        {
            for(int j=0;j<y.length();j++)
            {
                if(x[i]==y[j])
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
