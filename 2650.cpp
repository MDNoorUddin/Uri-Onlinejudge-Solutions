#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
        int c;
        cin>>c;
        cin.ignore();
        while(t--)
        {
            string h;
            int num=0;
            getline(cin,h);
            int d=h.length()-1;
            string temp;
            while(true)
            {
                if(h[d]<=57&&h[d]>=48)temp=temp+h[d];
                else break;
                d--;

            }
            int rem=temp.length()-1;
            for(int j=temp.length()-1;j>=0;j--)
            {
                int tr=temp[j]-48;
                for(int i=0;i<rem;i++)
                    tr*=10;
                rem--;
                num+=tr;

            }
            //cout<<num<<":";
            int len=h.length()-temp.length();
            //cout<<num<<endl;
            if(num>c) {for(int i=0;i<len-1;i++)cout<<h[i];
            cout<<endl;
            }
        }
    return 0;
}
