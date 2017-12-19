#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>

using namespace std;

#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
//#define MAX 999999999999999999
#define MIN 0
map<int,ll> mp;
map<int,ll>::iterator it;
void sieve();
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int q,e;
	cin>>q>>e;
	vector<bool> a(1001);
	fill(a.begin(),a.end(),false);
	int xx;
	for(int i=0;i<e;i++)
	{
		cin>>xx;
		a[xx]=true;
	}
	for(int i=0;i<q;i++)
	{
		cin>>xx;
		if(a[xx]==false)
		{
			a[xx]=true;
			cout<<1<<endl;
		}
		else cout<<0<<endl;
	}
	ret 0;
}
