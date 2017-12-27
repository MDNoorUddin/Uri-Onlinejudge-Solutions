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

vector<string> a;
void sieve();
string toBinary(int n);
bool findingSubString(string a,string b);

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout)
	sieve();
	int a;
	ll sum=0;
	for(int i=0;i<9;i++)
	{
		cin>>a;
		sum+=a;
	}
	cout<<::a[sum%9]<<endl;
	ret 0;
}
void sieve()
{
	 a.push_back("Rudolph");a.push_back("Dasher"); 
	 a.push_back("Dancer");a.push_back("Prancer");
	 a.push_back("Vixen");a.push_back("Comet");
	 a.push_back("Cupid");a.push_back("Donner");
	 a.push_back("Blitzen");
	 return;
}
