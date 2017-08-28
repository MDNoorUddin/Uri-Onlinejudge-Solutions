#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string str;
        getline(cin,str);
        string a[51];
        int A[51];
        int J=0;
        bool c=true;
        string d;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' '){
                a[J]=d;
                A[J]=d.length();
               d.clear();
                J++;
                c=false;
            }
            else
            {
                d=d+str[i];
                c=true;
            }
        }
        if(c){
        a[J]=d;
        A[J]=d.length();
        J++;
        }
        //for(int i=0;i<J;i++)
            //cout<<a[i]<<" "<<A[i]<<endl;
        int k=0;
        while(k<J-1)
        {
            int ptr=0;
            while(ptr<J-k-1)
            {
                if(A[ptr]<A[ptr+1])
                {
                    int temp;
                    temp=A[ptr];
                    A[ptr]=A[ptr+1];
                    A[ptr+1]=temp;
                    string x;
                    x=a[ptr];
                    a[ptr]=a[ptr+1];
                    a[ptr+1]=x;
                }
                ptr++;
            }
            k++;
        }
        for(int i=0;i<J-1;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[J-1]<<endl;
    }
    return 0;

}
