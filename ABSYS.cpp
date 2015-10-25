#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <string>
#include <iostream>

#include <cstdlib>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int check(char *a){
	for (int i = 0; i < strlen(a); i++){
		if (isalpha(a[i]))
			return 0;
	}
	return 1;
}
int main(){
    int t;
	char a[50], b[50], c[50];
	scanf("%d", &t);
	while (t--){
		scanf("%s + %s = %s", a, b, c);
		if (!check(a)){
			printf("%d + %d = %d\n", atoi(c) - atoi(b), atoi(b), atoi(c));
		}else if (!check(b)){
			printf("%d + %d = %d\n", atoi(a), atoi(c) - atoi(a), atoi(c));
		}else{
			printf("%d + %d = %d\n", atoi(a), atoi(b), atoi(a)+atoi(b));
		}
	}
}
