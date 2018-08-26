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

int main(int argc, char** argv){
	string str;
	while(getline(cin,str))
	{
		if(str=="esquerda")cout<<"ingles\n";

		else if(str=="direita")cout<<"frances\n";

		else if(str=="nenhuma")cout<<"portugues\n";
		else cout<<"caiu\n";
	}
	return 0;
}
