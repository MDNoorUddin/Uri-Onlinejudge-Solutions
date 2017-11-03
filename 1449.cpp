#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		cin.ignore();
		string a,b;
		map<string,string> mp;
		while(m--)
		{
			getline(cin,a);
			getline(cin,b);
			mp[a]=b;
			//cout<<"s="<<mp[a]<<endl;
		}
		while(n--)
		{
			map<string,string>::iterator it;
			getline(cin,a);
			string temp;
			for(int i=0;i<a.length();i++)
			{
				if(a[i]==' ')
				{
					if(!temp.empty())
					{
						it=mp.find(temp);
						if(it!=mp.end())
						cout<<it->second;
						else
						cout<<temp;
						temp.clear();
					}
					cout<<a[i];
				}
				else
				temp=temp+a[i];
			}
			    if(!temp.empty())
					{
						it=mp.find(temp);
						if(it!=mp.end())
						cout<<it->second;
						else
						cout<<temp;
						temp.clear();
					}
					cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
