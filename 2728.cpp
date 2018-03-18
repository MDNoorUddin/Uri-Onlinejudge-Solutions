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
	string str;
	while(cin>>str)
	{
		string temp;
		string answer;
		int count=0;
		string last="cobol";
		bool f=true;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='-')
			{
				if(isupper(temp[0]))temp[0]=temp[0]+32;
				if(isupper(temp[temp.length()-1]))temp[temp.length()-1]=temp[temp.length()-1]+32;
				if(last[count]==temp[0]||last[count]==temp[temp.length()-1])
				{
					count++;
				}
				else
				{
					f=false;
					break;
				}
				temp.clear();
			}
			else temp=temp+str[i];
		}
		if(!temp.empty())
		{
			if(isupper(temp[0]))temp[0]=temp[0]+32;
				if(isupper(temp[temp.length()-1]))temp[temp.length()-1]=temp[temp.length()-1]+32;
				if(last[count]==temp[0]||last[count]==temp[temp.length()-1])
				{
					count++;
				}
				else
				{
					f=false;
					//break;
				}
				temp.clear();
		}
			if(f)
			{
				printf("GRACE HOPPER\n");
			}
			else
			{
				printf("BUG\n");
			}
	}
	return 0;
}
