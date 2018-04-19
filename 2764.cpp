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
#include<bitset>

using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459

int main(int argc, char** argv) {
	int DD,MM,YY;
	scanf("%d/%d/%d",&DD,&MM,&YY);
	if(MM<10)cout<<0;
	cout<<MM<<"/";
	if(DD<10)cout<<0;
	cout<<DD<<"/";
	if(YY<10)cout<<0;
	cout<<YY<<endl;
	
	if(YY<10)cout<<0;
	cout<<YY<<"/";
	if(MM<10)cout<<0;
	cout<<MM<<"/";
	if(DD<10)cout<<0;
	cout<<DD<<endl;
	
	if(DD<10)cout<<0;
	cout<<DD<<"-";
	if(MM<10)cout<<0;
	cout<<MM<<"-";
	if(YY<10)cout<<0;
	cout<<YY<<endl;
	return 0;
}
