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
#include<bitset>
#include<string.h>

using namespace std;

typedef long long ll;


#define PI acos(-1)
#define E 2.718281828459


int main(int argc, char** argv) {

    int n;

    while(cin>>n)
    {
        string str;
        int count=0;
            if(n>=1000)
            {
                int g=n/1000;
                n=n%1000;
                count+=(g*4);
            }
            if(n>=900)
            {
                n=n%900;

                str=str+"CM";
            }
            if(n>=500)
            {
                int g=n/500;
                n=n%500;
                count+=(g*3);
                 str=str+"D";
            }
            if(n>=400)
            {
                n=n%400;

                str=str+"CD";
            }
            if(n>=100)
            {
                int g=n/100;
                n=n%100;
                count+=(g*2);
                for(int i=1;i<=g;i++)str=str+"C";
            }
            if(n>=90)
            {
                n=n%90;

                str=str+"XC";

            }
            if(n>=50)
            {
                int g=n/50;
                n=n%50;

                str=str+"L";
            }
            if(n>=40)
            {
                n=n%40;

                str=str+"XL";
            }
            if(n>=10)
            {
                int g=n/10;
                n=n%10;
                count+=(g*2);
                 for(int i=1;i<=g;i++)str=str+"X";
            }
             if(n==1)
            {
                str=str+"I";
            }
            if(n==2)
            {
                str=str+"II";
            }
            if(n==3)
            {
                str=str+"III";
            }
            if(n==4)
            {
                str=str+"IV";
            }
            if(n==6)
            {
                str=str+"VI";
            }
            if(n==7)
            {
                str=str+"VII";
            }
            if(n==8)
            {
                str=str+"VIII";
            }
            if(n==9)
            {
                str=str+"IX";
            }
            if(n==5)str=str+"V";
            cout<<str<<endl;
    }
	return 0;
}
