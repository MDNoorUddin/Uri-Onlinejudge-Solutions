#include <iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
#include<set>
#include<map>
#include<vector>
#include<math.h>

using namespace std;

#define ll long long
#define input scanf
#define output printf 
#define Loop while
#define echo cout
#define ret return
#define MAX 999999999999999999

ll a[5001];

void sieve()
{
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=5000;i++)
	{
		a[i]=i*i;
	}
	ret;
}
int main(int argc, char** argv) {
	
	sieve();
	int n;
	
	Loop((input("%d",&n)==1)&&n)
	{
		int x=sqrt(n);
		int i=1;
		Loop(i<x)
		{
			if(a[i]>n)break;
			output("%lld ",a[i++]);
		}
		output("%lld\n",a[x]);
	}
	ret 0;
}

