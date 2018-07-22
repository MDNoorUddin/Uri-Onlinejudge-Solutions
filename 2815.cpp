#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    stringstream f(str);
    string temp;
    int count=1;
    while(f>>temp)
    {
    	if(count++!=1)cout<<" ";
    	if(temp.length()<=3)
    	{
    		cout<<temp;
		}
		else
		{
			if(temp[0]==temp[2]&&temp[1]==temp[3])
			{
				for(int i=2;i<temp.length();i++)cout<<temp[i];
			}
			else cout<<temp;
		}
	}
	cout<<endl;
	return 0;
}
