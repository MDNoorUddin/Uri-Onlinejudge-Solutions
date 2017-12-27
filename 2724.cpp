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
	int n,t,u;
	scanf("%d",&n);
	bool sp=false;
	while(n--)
	{
		if(sp)cout<<endl;
		sp=true;
		scanf("%d",&t);
		vector<string> che(t);
		cin.ignore();
		for(int i=0;i<t;i++)
		{
			cin>>che[i];
		}
		scanf("%d",&u);
		cin.ignore();
		string str;
		while(u--)
		{
			cin>>str;
			bool harm=false;
			size_t found;
			for(int i=0;i<t;i++)
			{
				found=str.find(che[i]);
				if(found!=string::npos)
				{
					int index=found;
					index+=che[i].length();
					if(str.length()>=index&&((str[index]>=97
					&&str[index]<=122)||(isdigit(str[index]))))
					{
						continue;
					}
					cout<<"Abortar\n";
					//cout<<found<<endl;
					harm=true;
					break;
				}
			}
			if(!harm)cout<<"Prossiga\n";
		}
	}
	ret 0;
}
