#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	//cin.ignore();
	string s;
	getline (cin, s);
	map<char,char> mp;
	string x,y;
	char a,b;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		a=x[0];
		b=y[0];
		mp[a]=b;
		mp[b]=a;
	}
	//cin.ignore();
	getline (cin, s);
	string str;
	map<char,char>::iterator it;
	while(m--){
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
		it=mp.find(str[i]);
		if(it!=mp.end())
		cout<<it->second;
		else
		cout<<str[i];
	}
	cout<<endl;
  }
  return 0;
}
