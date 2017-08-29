#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
 
int main() {
 
    char a[502];
    gets(a);
    int len=strlen(a);
    if(len<=140)
    cout<<"TWEET\n";
    else
    
    cout<<"MUTE\n";
    
 
    return 0;
}
