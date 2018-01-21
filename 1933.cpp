#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#include<math.h>
#include<string>
#include<list>
#include<string.h>

using namespace std;

#define ll long long
#define MAX 999999999999999999
#define MIN 0
#define PI acos(-1)
#define E 2.718281828459
#define ii pair<int, int>

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int A,B;
	while(cin>>A>>B)
	{
		if(A==B)cout<<A<<endl;
		else{
			cout<<max(A,B)<<endl;
		}
	}
	return 0;
}         
