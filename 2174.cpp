#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    string a[n];
    for(i=0;i<n;++i)
        cin>>a[i];

    for(i=0;i<n;++i)
        for(j=i+1;j<n;)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;++k)
                    a[k]=a[k+1];

                --n;
            }
            else
                ++j;
        }

    printf("Falta(m) %d pomekon(s).\n",151-n);
    return 0;
}
