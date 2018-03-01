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
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	string str,s;
	int gifts;
	while(cin>>str)
	{
		scanf("%d",&gifts);
		getline(cin,s);
		int E;
		double price;
		string name;
		vector< pair<string,double> > chris[11];
		int mx=0;
		for(int i=0;i<gifts;i++)
		{
			getline(cin,name);
			cin>>price>>E;
			//cout<<name<<" "<<price<<" "<<E<<endl;
			chris[E].push_back(make_pair(name,price));
			if(E>mx)mx=E;
			getline(cin,s);
		}
		printf("Lista de %s\n",str.c_str());
		for(int i=10;i>0;i--)
		{
			if(!chris[i].empty())
			{
				for(int j=0;j<chris[i].size()-1;j++)
				{
					for(int k=0;k<chris[i].size()-1;k++)
					{
						if(chris[i][k].second>chris[i][k+1].second)
						{
							//if(i==8)
							//cout<<"mov "<<chris[i][j].first<<" "<<chris[i][k].first<<endl;
							swap(chris[i][k+1],chris[i][k]);
						}
						else if(chris[i][k+1].second==chris[i][k].second&&chris[i][k].first>chris[i][k+1].first)
						{
							swap(chris[i][k+1],chris[i][k]);
						}
					}
				}
				for(int j=0;j<chris[i].size();j++)
				{
					//Smartphone - R$950.00
					cout<<chris[i][j].first<<" - R$";
					printf("%.2lf\n",chris[i][j].second);
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
