#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
#include<stack>
#include<queue>
#include<math.h>
#include <utility>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

typedef long long ll;

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int n;
	while(cin>>n)
	{
		vector<int> a;
		vector<int>::iterator it;
		int count=0;
		int v;
		int add=0;
		for(int i=1;i<=n;i++)
		{
			cin>>v;
			if(add<4)
			{
				it=find(a.begin(),a.end(),v);
				if(it==a.end())
				{
					a.push_back(v);
					add++;
				    count++;
				}
			}
			else
			{
				it=find(a.begin(),a.end(),v);
				if(it!=a.end())
				{
					int temp=*it;
					a.erase(it);
					a.push_back(temp);
					//cout<<"putting at last  "<<v<<endl;
				}
				else
				{
					count++;
					a[0]=v;
					it=a.begin();
					a.erase(it);
					a.push_back(v);
					//cout<<"adding "<<v<<endl;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
