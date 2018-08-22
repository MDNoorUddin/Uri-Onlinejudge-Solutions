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
string horizontal;

void sieve()
{
	for(int i=0;i<80;i++)
	{
		horizontal=horizontal+"-";
	}
	return;
}
int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	sieve();
	string str;
	int counter=0;
	while(getline(cin,str))
	{
		if(str=="")
		{
			continue;
		}
		stringstream f(str);
		string temp;
		while(f>>temp)
		{
			//cout<<temp<<endl;
			if(temp=="<br>"){
				cout<<endl;
				counter=0;
				continue;
			}
			if(temp=="<hr>")
			{
				if(counter!=0)
				{
					counter=0;
					cout<<endl;
				}
				cout<<horizontal<<endl;
				continue;
			}
			else
			{

				if(counter==0&&temp.length()<=80)
				{
					if(counter!=0)cout<<" ";
					cout<<temp;
					counter=temp.length();
					if(counter==80)
					{
						counter=0;
						cout<<endl;
					}
					continue;
				}
				if(counter+temp.length()+1<80&&counter)
				{
					if(counter!=0)cout<<" ";
					cout<<temp;
					counter+=temp.length()+1;
					{
						if(counter>=80)
					{
						counter=0;
						cout<<endl;
					}
					}
				}
				else if(counter+temp.length()+1>=80&&counter)
				{
					cout<<endl;
					counter=temp.length();
					cout<<temp;
				}
			}
		}
		//cout<<counter<<endl;
	}
	cout<<endl;
	return 0;
}
