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

    int L,C;
    cin>>L>>C;
    int sum=L*C;
    sum+=(L-1)*(C-1);
    cout<<sum<<"\n";
    sum=0;
    sum+=(L-1)*2;
    sum+=(C-1)*2;
    cout<<sum<<endl;
}
