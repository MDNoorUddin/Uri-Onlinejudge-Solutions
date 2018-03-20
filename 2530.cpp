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

#define PI acos(-1)
#define e 2.718281828459

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int n,m;
	int h;
	while(cin>>n>>m)
	{
		vector<int> a(n);
		vector<int> b(m);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		int i=0,j=0;
		while(i<m&&j<n)
		{
			if(b[i]==a[j])
			{
				i++;
			}
			j++;
		}
		if(i==m)printf("sim\n");
		else printf("nao\n");
	}
	return 0;
}
