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
	
	//freopen("c.txt","w",stdout)
	int t;
	cin>>t;
	cin.ignore();
	string str;
	while(t--)
	{
		cin>>str;
		if(str.length()!=20)
		cout<<"INVALID DATA\n";
		else if(str[0]!='R'||str[1]!='A')
		cout<<"INVALID DATA\n";
		else
		{
			bool zero=false;
			string temp;
			bool invalid=false;
			bool pass=false;
			for(int i=2;i<str.length();i++)
			{
				if(str[i]>48&&str[i]<=57)
				{
						pass=true;
				    	temp=temp+str[i];
				}  
				else if(str[i]==48)
				{
					if(pass)
					temp=temp+'0';
				}
				else
				{
					invalid=true;
						break;
				}
			}
			if(invalid)cout<<"INVALID DATA\n";
			else cout<<temp<<endl;
		}
	}
	ret 0;
}
