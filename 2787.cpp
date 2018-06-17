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

using namespace std;

typedef long long ll;
typedef std::vector<double> vi;

#define PI acos(-1)
#define E 2.718281828459
#define g 9.81

int main(int argc, char** argv) {
    int i,j;
    cin>>i>>j;
    if(i%2==0)
    {
        if(j%2==0)cout<<1<<endl;
        else cout<<0<<endl;
    }
    else{
        if(j%2!=0)cout<<1<<endl;
        else cout<<0<<endl;
    }
}
