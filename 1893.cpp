#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, f;

	scanf( "%d%d", &i, &f );
	if( 3 <= f && f <= 96 && f > i ) printf( "crescente\n" );
	else if( 3 <= f && f <= 96 && f < i ) printf( "minguante\n" );
	else if( 0 <= f && f <= 2 ) printf( "nova\n" );	
	else if( 97 <= f && f <= 100 ) printf( "cheia\n" );

	return 0;
}
