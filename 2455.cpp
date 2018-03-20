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
	int p1,c1,p2,c2;
	cin>>p1>>c1>>p2>>c2;
	if((p1*c1)==(p2*c2))
	{
		cout<<0<<endl;
	}
	else if((p1*c1)>(p2*c2))cout<<-1<<endl;
	else cout<<1<<endl;
	return 0;
}
