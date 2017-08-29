#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
 
int main() {
 
    char a[502];
    gets(a);
    int len=strlen(a);
    if(len<=80)
    cout<<"YES\n";
    else
    
    cout<<"NO\n";
    
 
    return 0;
}
