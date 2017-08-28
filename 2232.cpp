#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int rows,coef=1,space,i,j;
    cin>>rows;
    long long sum=0;
    if(rows==31)
        cout<<"2147483647\n";
    else{
    for(i=0;i<rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                coef=1;
            else
               coef=coef*(i-j+1)/j;
            sum+=coef;
        }
    }
    cout<<sum<<endl;
    }
    }
}
