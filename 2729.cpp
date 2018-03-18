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
	cin>>n;
	string str;
	getline(cin,str);
	while(n--)
	{
		getline(cin,str);
		stringstream f(str);
		set<string> s;
		set<string>::iterator it;
		string temp;
		int count=-1;
		while(f>>temp){
			s.insert(temp);
			count++;
		}
		it=s.begin();
		vector<string> st;
		while(it!=s.end())
		{
			st.push_back(*it);
			it++;
		}
		for(int i=0;i<st.size()-1;i++)
		cout<<st[i]<<" ";
		cout<<st[st.size()-1]<<endl;
	}
	return 0;
}
