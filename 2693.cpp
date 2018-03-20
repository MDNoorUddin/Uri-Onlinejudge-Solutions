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

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int q;
	string str;
	char c;
	int h;
	while(cin>>q)
	{
		//getline(cin,str);
		vector< pair< pair<string,char>,int> > a;
		vector< pair< pair<string,char>,int> >::iterator it;
		while(q--)
		{
			getline(cin,str);
			cin>>str>>c>>h;
			a.push_back(make_pair( make_pair(str,c) ,h));
		}
		for(int i=0;i<a.size()-1;i++)
		{
			int ptr=0;
			while(ptr<a.size()-1)
			{
				if(a[ptr].second>a[ptr+1].second)
				{
					swap(a[ptr],a[ptr+1]);
				}
				else if(a[ptr].second==a[ptr+1].second)
				{
					if(a[ptr].first.second>a[ptr+1].first.second)
					{
						swap(a[ptr],a[ptr+1]);
					}
					else if(a[ptr].first.second==a[ptr+1].first.second)
					{
						if(a[ptr].first.first>a[ptr+1].first.first)
						swap(a[ptr],a[ptr+1]);
					}
				}
				ptr++;
			}
		}
		for(int i=0;i<a.size();i++)
		{
			cout<<a[i].first.first<<endl;
		}
	}
	return 0;
}
