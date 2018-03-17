
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

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int n;
	string str;
	while(cin>>n)
	{
		getline(cin,str);
		while(n--)
		{
			getline(cin,str);
			int space=0;
			for(int i=0;i<str.length();i++)
			{
				if(str[i]==' ')space++;
			}
			int count=96;
			for(int i=0;i<str.length();i++)
			{
				if(str[i]==' ')break;
				else count++;
			}
			if(space==0)
			printf("%c\n",count);
			else
			{
				int c;
				if(space==1)c=3;
				else if(space==2)c=6;
				else if(space==3)c=9;else if(space==4)c=12;else if(space==5)c=15;else if(space==6)c=18;else if(space==7)c=21;
				else if(space==8)c=24;
				printf("%c\n",c+count);	
			}
		}
	}
	return 0;
}
