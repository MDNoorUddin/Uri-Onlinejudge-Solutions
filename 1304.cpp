#include<bitset>
#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
#include<queue>
#include<stack>
#include<deque>
#include<stdio.h>
#include<bitset>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define INF 9999999
#define pfc(I,a) printf("Case %d: %d\n",I++,a)
#define pc(I) printf("Case %d: ",I++)
#define pf(n) printf("%d\n",n)
#define sf(n) scanf("%d",&n)
#define nl printf("\n");
int I=1;

int main()
{
    string str;
    double total_distance=0.00;
    double h1=0,h2,m1=0,m2,s1=0,s2;
    double th,tm,ts;
    double speed=0,speed1;
    double totalSecond,previousSecond=0,current;
    while(getline(cin,str))
    {
        h2=(str[1]-48)+((str[0]-48)*10);
        m2=(str[4]-48)+((str[3]-48)*10);
        s2=(str[7]-48)+((str[6]-48)*10);
        th=s2;
        //cout << h2 << " " << m2 << " " << s2 << endl;
        totalSecond = (h2*3600) + (m2*60) + s2;
        current = totalSecond - previousSecond;
        previousSecond = totalSecond;
        //cout << current << " " << previousSecond << endl;

        //cout << speed << " speed\n";

        total_distance += (speed*current) / 3600;
        if(str.length()==8)
        {
            printf("%s %.2lf km\n",str.c_str(),total_distance);
        }
        else
        {
            speed=0;
            for(int i=9;i<str.length();i++)
            {
                speed*=10;
                speed = speed + (str[i]-48);
            }
        }
    }
    return 0;
}

