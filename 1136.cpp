#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b;
	while(cin>>n>>b&&n)
	{
		vector<bool> a(n+1);
		int count=n+1;
		std::fill(a.begin(),a.end(),false);
		vector<int> c(b);
		for(int i=0;i<b;i++)
		{
			cin>>c[i];
			a[c[i]]=true;
			count--;
		}
		int abss;
		for(int i=0;i<b-1;i++)
		{
			for(int j=i+1;j<b;j++)
			{
				abss=abs(c[i]-c[j]);
				if(a[abss]==false)
				{
					a[abss]=true;
					count--;
				}
			}
		}
		if(count!=0)
		  cout<<"N\n";
		else
		  cout<<"Y\n";
	}
}
