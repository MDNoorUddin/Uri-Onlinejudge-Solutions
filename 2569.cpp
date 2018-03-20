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
	string a,op,b;
	cin>>a>>op>>b;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='7')a[i]='0';
	}
	for(int i=0;i<b.length();i++)
	{
		if(b[i]=='7')b[i]='0';
	}
	stringstream f(a);
	ll A=0;
	f >> A;
	ll B=0;
	stringstream h(b);
	h >> B;
	//cout<<A<<" "<<B<<" ";
	if(op=="+")
	B=A+B;
	else B=B*A;
	//cout<<B<<" ";
	string tem;
	while(B>0)
	{
		char c=((B%10)+48);
		if(c=='7')c='0';
		tem=tem+c;
		B/=10;
	}
	reverse(tem.begin(),tem.end());
	stringstream k(tem);
	ll temm;
	k>>temm;
	cout<<temm<<endl;
	return 0;
}
