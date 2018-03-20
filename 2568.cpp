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
	int D,I,X,F;
	cin>>D>>I>>X>>F;
	int sum=I;
	for(int i=D+1;i<=D+F;i++)
	{
		if(i%2!=0)
		sum-=X;
		else sum+=X;
	}
	cout<<sum<<endl;
	return 0;
}
