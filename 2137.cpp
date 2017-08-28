#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        string a[n];
        char x[5];
        int A[n];
        int J=0,min=1;
        for(int i=0;i<n;i++,J++)
        {
            cin>>x;
            a[i]=x;
            A[J]=atoi(x);
        }
        int k=0;
        while(k<J-1)
        {
            int ptr=0;
            while(ptr<J-k-1)
            {
                if(A[ptr]>A[ptr+1])
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
        for(int i=0;i<J;i++)
        {
            cout<<a[i]<<endl;;
        }
    }
    return 0;

}
