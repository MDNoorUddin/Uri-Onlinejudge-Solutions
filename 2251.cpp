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
#define MAX 999999999999999999
#define MIN 0
map<int,ll> mp;
map<int,ll>::iterator it;
void sieve();
vector<ll> x(31);
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	sieve();
	int n;
	int i=1;
	while(cin>>n&&n)
	{
		printf("Teste %d\n",i++);
		cout<<x[n]<<endl;
		cout<<endl;
	}
	ret 0;
}
void sieve()
{
	for(int i=1;i<=30;i++)
	{
		x[i]=pow(2,i)-1;
	}
	return;
}
