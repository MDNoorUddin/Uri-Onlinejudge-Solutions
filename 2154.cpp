#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("uri.txt","w",stdout);
    int n;
    while(cin>>n)
    {
            string a,b;
            int count=0;
        while(true)
        {
            cin>>a;
            string temp;
            int c=0,d=0;
            for(int i=0;i<a.length();i++)
            {
                if(a[i]=='x')
                {
                    stringstream g(temp);
                    g>>c;
                    temp.clear();
                }
                else temp=temp+a[i];
            }
            stringstream o(temp);
                    o>>d;
            if(d!=2)
            printf("%dx%d",c*d,d-1);
            else printf("%dx",c*d);
            count++;
            if(count==n)break;
            cin>>b;
            printf(" + ");
        }
        printf("\n");
    }
    return 0;
}
