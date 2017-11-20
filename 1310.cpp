#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int cost;
		cin>>cost;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int maxSumSoFar=0;

int maxISoFar=0;

int maxJSoFar=-1;

for(int i=0; i<n; i++){
	

    int sum=0;

    for(int j=i; j<n; j++){

        sum+=a[j];
        sum-=cost;
        if(sum>maxSumSoFar){

            maxSumSoFar=sum;

            maxISoFar=i;

            maxJSoFar=j;

        }

    }

    }
    cout<<maxSumSoFar<<endl;
  }
  return 0;
}
