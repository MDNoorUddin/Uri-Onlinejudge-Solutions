#include <cstdio> 
 using namespace std; 
 
 
 int main() 
 { 
     int cases; scanf("%d", &cases); 
 
 
     while(cases--) 
     { 
         int x, y; scanf("%d %d", &x, &y); 
 
 
         printf("%d cm2\n", (x*y)/2); 
     } 
 } 
