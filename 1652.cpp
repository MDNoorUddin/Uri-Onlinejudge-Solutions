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
#define PI acos(-1)
#define e 2.718281828459

int main(int argc, char** argv) {
	//freopen("c.txt","w",stdout);
	int L,N;
	scanf("%d%d",&L,&N);
	map<string,string> mp;
	map<string,string>::iterator it;
	string str,d;
	cin.ignore();
	while(L--)
	{
		cin>>str>>d;
		mp[str]=d;
	}
	while(N--)
	{
		cin>>str;
		it=mp.find(str);
		if(it!=mp.end())
		{
			cout<<it->second<<endl;
		}
		else
		{
			int len=str.length()-1;
			if(str[len]=='y')
			{
				for(int i=0;i<len;i++)cout<<str[i];
				if((str[len-1]=='a'||str[len-1]=='e'||str[len-1]=='i'||str[len-1]=='o'||str[len-1]=='u'))cout<<"ys\n";
				
				else cout<<"ies\n";
			}
			else if(str[len]=='o'||str[len]=='s'||str[len]=='x')
			{
				//for(int i=0;i<=len;i++)cout<<str[i];
				cout<<str;
				cout<<"es\n";
			} 
			else if(str.length()>=2&&str[len]=='h'&&(str[len-1]=='c'||str[len-1]=='s'))
			{
					//for(int i=0;i<=len;i++)cout<<str[i];
					cout<<str;
				    cout<<"es\n";
				
			}
			else
			{
				cout<<str;
				cout<<"s\n";
			}
		}
	}
	return 0;
}          
