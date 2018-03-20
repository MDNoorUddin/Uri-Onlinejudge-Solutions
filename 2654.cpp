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
	cin>>q;
	string str;
	char c;
	int power,kill,dead;
	//getline(cin,str);
	vector< pair< pair<string,int>, pair<int,int> > > a;
	vector< pair< pair<string,int>, pair<int,int> > >::iterator it;
	while(q--)
	{
		getline(cin,str);
		cin>>str>>power>>kill>>dead;
		a.push_back(make_pair( make_pair(str,power) ,make_pair(kill,dead)));
	}
		for(int i=0;i<a.size()-1;i++)
		{
			int ptr=0;
			while(ptr<a.size()-1)
			{
				if(a[ptr].first.second<a[ptr+1].first.second)
				{
					swap(a[ptr],a[ptr+1]);
				}
				else if(a[ptr].first.second==a[ptr+1].first.second)
				{
					if(a[ptr].second.first<a[ptr+1].second.first)
					{
						swap(a[ptr],a[ptr+1]);
					}
					else if(a[ptr].second.first==a[ptr+1].second.first)
					{
						if(a[ptr].second.second>a[ptr+1].second.second)
						swap(a[ptr],a[ptr+1]);
						else if(a[ptr].second.second==a[ptr+1].second.second)
						{
							if(a[ptr].first.first>a[ptr+1].first.first)
							swap(a[ptr],a[ptr+1]);
						}
					}
				}
				ptr++;
			}
		}
		cout<<a[0].first.first<<endl;
	return 0;
}
