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
	int s,b;
	while((scanf("%d%d",&s,&b)==2)&&s&&b)
	{
		set<int> a;
		set<int>::iterator it;
		set<int>::iterator jt;
		set<int>::iterator L;
		set<int>::iterator H;
		for(int i=1;i<=s;i++)
		{
			a.insert(i);
		}
		int l,h;
		set<int>::iterator LL;
		set<int>::iterator HH;
		while(b--)
		{
			scanf("%d%d",&l,&h);
			it=a.find(l);
			jt=a.find(h);
			L=it;H=jt;
			if(a.size()==1)
			{
				cout<<"* *\n";
				continue;
			}
			if(a.empty())
			{
				cout<<"* ";
			}
			else if(L==a.end())
			{
				cout<<"* ";
			}
			else if(L==a.begin())
			{
				cout<<"* ";
			}
			else
			{
				L--;
				cout<<*L<<" ";
			}
			
			if(a.empty())
			{
				cout<<"*\n";
			}
			else if(H==a.begin())
			{
				//cout<<"*\n";	
				H++;
				cout<<*H<<"\n";
			}
			else
			{
				H++;
				if(H!=a.end())
				cout<<*H<<"\n";
				else cout<<"*\n";
			}
			jt++;
			a.erase(it,jt);
			//for(set<int>::iterator i=a.begin();i!=a.end();i++)
			//cout<<*i<<" ";
			//cout<<endl;
		}
		printf("-\n");
	}
	return 0;
}
