#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int main(){
 int n,a,b;
 while(cin>>n&&n){
   cin >> a;
   cin >> b;
   int lcm=(a*b)/gcd(a,b);
   int x = (n/a) + (n/b) - (n/lcm);
   printf("%d\n",x);
 }
 return 0;
}
