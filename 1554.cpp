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
int main(int argc, char** argv) {
	int t;
	input ("%d",&t);
	int n;
	while(t--)
	{
		input ("%d",&n);
		ll x,y,xi,yi;
		input ("%lld%lld",&x,&y);
		vector<double> a;
		double distance;
		while(n--)
		{
			input ("%lld%lld",&xi,&yi);
			xi=abs(xi-x)*abs(xi-x);
			yi=abs(yi-y)*abs(yi-y);
			distance=sqrt(xi+yi);
			a.push_back(distance);
		}
		int index=99;
		double mx=MAX;
		for(int i=0;i<a.size();i++)
		{
			//output("%.3lf\n",a[i]);
			if(a[i]<mx){
			  mx=a[i];
			  index=i;
	       	}
		}
		output("%d\n",index+1);
	}
	ret 0;
}

