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

vector<bool> a(32);
map<int,string> b;
void si2()
{
	b[1]="MONDAY"; 
    b[2]="MONDAY";
	b[0]="FRIDAY";
	b[9]="FRIDAY";
	b[8]="THURSDAY";
	b[7]="THURSDAY";
	b[5]="WEDNESDAY";
	b[6]="WEDNESDAY";
	b[3]="TUESDAY";
	b[4]="TUESDAY";
}
int main(int argc, char** argv) {
	
	//freopen("c.txt","w",stdout);
	si2();
	int t;
	cin>>t;
	cin.ignore();
	string str;
	while(t--)
	{
		cin>>str;
		if(str.length()==8)
		{
			bool f=false;
			for(int i=0;i<3;i++)
			{
				if(str[i]>=65&&str[i]<=90)
				{
					continue;
				}
				else
				{
					f=true;
					break;
				}
			}
			if(f)cout<<"FAILURE\n";
			else
			{
				if(str[3]!='-')
			   {
			     	cout<<"FAILURE\n";
			   }
			   else
			   {
			   	f=false;
			   	  for(int i=4;i<=7;i++)
			   	  {
			   	  	if(str[i]<48||str[i]>57)
			   	  	{
			   	  		f=true;
			   	  		break;
					}
				 }
				 if(f)cout<<"FAILURE\n";
				 else
				 cout<<b[str[7]-48]<<endl;
			   }
			}
		}
		else
		{
			printf("FAILURE\n");
		}
	}
	ret 0;
}
