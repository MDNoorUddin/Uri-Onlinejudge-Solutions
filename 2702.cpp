#include<bits/stdc++.h>
using namespace std;
int main()
{
	int chicken1,beef1,pasta1;
	int chicken2,beef2,pasta2;
	scanf("%d%d%d",&chicken1,&beef1,&pasta1);
	scanf("%d%d%d",&chicken2,&beef2,&pasta2);
	int miss=0;
	if(chicken2>chicken1)miss+=(chicken2-chicken1);
	if(beef2>beef1)miss+=(beef2-beef1);
	if(pasta2>pasta1)miss+=(pasta2-pasta1);
	printf("%d\n",miss);
	return 0;
}
