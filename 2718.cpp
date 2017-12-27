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

int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	int t;
	cin>>t;
	ll n;
	while(t--)
	{
		cin>>n;
		ll maxx=0;
		ll count=0;
		ll temp;
		while(n>0)
		{
			temp=n%2;
			n/=2;
			if(temp==1)count++;
			else
			{
				if(count>maxx)
				{
					maxx=count;
					count=0;
				}
				count=0;
			}
		}
		if(count>maxx)
				{
					maxx=count;
					count=0;
				}
		cout<<maxx<<endl;
	}
	ret 0;
}
