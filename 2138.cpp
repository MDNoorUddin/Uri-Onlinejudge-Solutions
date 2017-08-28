#include<iostream>
using namespace std;
int main(){
    string str;
    while(cin>>str){
        int a[10]={0,0,0,0,0,0,0,0,0,0};
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
                a[0]++;
            else if(str[i]=='1')
                a[1]++;
            else if(str[i]=='2')
                a[2]++;
            else if(str[i]=='3')
                a[3]++;
                else if(str[i]=='4')
                a[4]++;
            else if(str[i]=='5')
                a[5]++;
            else if(str[i]=='6')
                a[6]++;
                else if(str[i]=='7')
                a[7]++;
            else if(str[i]=='8')
                a[8]++;
            else if(str[i]=='9')
                a[9]++;
        }
        int large=a[0],index=0;
        for(int i=1;i<10;i++)
        {
            if(a[i]>=large)
            {
                large=a[i];
                index=i;
            }
        }
        cout<<index<<endl;
    }
    return 0;
}
