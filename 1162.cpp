#include<bits/stdc++.h>
using namespace std;
int bubble_up(int a[],int size);
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int size=bubble_up(a,n);
        printf("Optimal train swapping takes %d swaps.\n",size);
    }
    return 0;
}
int bubble_up(int a[],int size)
{
    int count=0;
    for(int i=0;i<size-1;i++)
    {
        int ptr=0;
        while(ptr<size-i-1)
        {
            if(a[ptr+1]<a[ptr])
            {
                count++;
                int temp;
                temp=a[ptr];
                a[ptr]=a[ptr+1];
                a[ptr+1]=temp;
            }
            ptr++;
        }
    }
    return count;
}

