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
	int l,c,x,y;
	cin>>l>>c>>x>>y;
	x++;
	y++;
	ll lll=x-1;
	lll=lll*c;
	lll+=y;
	if(lll%2==0)cout<<"Esquerda\n";
	else cout<<"Direita\n";
	return 0;
}
