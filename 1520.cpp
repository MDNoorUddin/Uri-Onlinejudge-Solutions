#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>

using namespace std;


int main(int argc, char** argv) {
	int n,m;
	int x,y;
	while((scanf("%d",&n)==1))
	{
		vector<int> a;
		vector<int> num(101);
		fill(a.begin(),a.end(),0);
		while(n--)
		{
			scanf("%d%d",&x,&y);
			for(int i=x;i<=y;i++)
			{
				a.push_back(i);
				num[i]++;
			}
		}
		sort(a.begin(),a.end());
			scanf("%d",&x);
			if(num[x]==0)
			printf("%d not found\n",x);
			else
			{
				int in;
				for(int i=0;i<a.size();i++)
				{
					if(a[i]==x)
					{
						in=i;break;
					}
				}
				printf("%d found from %d to %d\n",x,in,in+num[x]-1);		
			}
	}
	return 0;
}
