#include<bits/stdc++.h>
using namespace std;
map<char,int> op;
void sieve()
{
	op['+']=1;
	op['-']=1;
	op['/']=2;
	op['*']=2;
	op['^']=3;
}
void infixToPostfix(string str)
{
	stack<char> q;
	
	for(int i=0;i<str.length();i++)
	{
		if(isalnum(str[i])) cout<<str[i];
		
		else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||
		str[i]=='^')
		{
			if(!q.empty()){
			while(op[str[i]]<=op[q.top()])
			{
				cout<<q.top();
				q.pop();
				if(q.empty()) break;
			}
		    }
			q.push(str[i]);
		}
		else if(str[i]=='('){
			q.push('(');
			//cout<<"first";
		}
		
		else if(str[i]==')')
		{
			while(q.top()!='(')
			{
				cout<<q.top();
				q.pop();
			}
			q.pop();
		}
	}
	while(!q.empty())
	{
		cout<<q.top();
		q.pop();
	}
	cout<<endl;
}
int main()
{
	sieve();
	int t;
	cin>>t;
	cin.ignore();
	string str;
	while(t--)
	{
		cin>>str;
		infixToPostfix(str);
	}
	return 0;
}
