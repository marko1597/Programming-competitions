#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	char rjec[500];
	int l;
	fgets(rjec, sizeof rjec, stdin);
	for ( int i=0; rjec[i]!='\0'; ++i ) {
		printf("%c", rjec[i]);
		if ( strchr("aeiou", rjec[i]) != NULL )
			i += 2;
	}
}
