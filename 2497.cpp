#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i=0;
    while(cin>>n&&n>=0)
    {
        printf("Experiment %d: %d full cycle(s)\n",++i,n/2);
    }
    return 0;
}
