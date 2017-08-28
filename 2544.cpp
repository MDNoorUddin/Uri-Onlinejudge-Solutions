#include<iostream>
using namespace std;
int main(){
	int a;
	while(cin>>a){
		if(a==1)
		cout<<0<<endl;
		else{
			int count=0;
			int sum=1;
			for(int i=1;;i++){
				 sum=sum*2;
				 count++;
				 if(sum>a)
				 break;
				 if(sum==a)
				 break;
				}
				cout<<count<<endl;
			}
		}
		return 0;
}
