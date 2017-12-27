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


using namespace std;


#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999
#define MIN 0
#define PI 3.1415

bool isPrime(int x);
void sieve();
string toBinary(int n);
bool findingSubString(string a,string b);
vector<int> a(32);
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	string str;
	int a;
	int sum=0;
	int out=0;
	while(cin>>str&&str[0]!='A')
	{
		cin>>a;
		if(str[0]=='S')
		{
			out++;
			sum+=a;
		}
		else
		{
			out--;
			sum-=a;
		}
	}
	printf("%d\n%d\n",sum,out);
	ret 0;
}
