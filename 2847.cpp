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

int main(int argc, char** argv){
	string str;
	getline(cin,str);
	//I love you!
	int I=0,l=0,o=0,v=0,e=0,y=0,u=0,pun=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='I')I++;
		if(str[i]=='l')l++;
		if(str[i]=='o')o++;
		if(str[i]=='v')v++;
		if(str[i]=='e')e++;
		if(str[i]=='u')u++;
		if(str[i]=='y')y++;
		if(str[i]=='!')pun++;
	}
	int count=0;
	while(I>0&&l>0&&o>=2&&v>0&&e>0&&y>0&&pun>0&&u>0)
	{
		count++;I--;
		l--;o-=2;v--;e--;u--;y--;pun--;
	}
	cout<<count<<endl;
	return 0;
}
