#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <string>

#define _USE_MATH_DEFINES
#include <math.h>
#include <cstdlib>

using namespace std;

typedef unsigned long long int llint;

const int M = 5005;

int R[M];

int init(string in){
	R[0] = 1;
	string tmp;
	for (int i = 1; i < in.size(); i++){
		tmp = in.substr(i - 1, 2);
		if ((atoi(tmp.c_str())) <= 26 )
			R[i] = 1;
		else
			R[i] = 0;
		if (tmp[0] == '0' || tmp[1] == '0')
			R[i - 1] = R[i] = 0;
	}
	return 0;
}
int main(){
    char niz[M];
	llint ans;
	while (1){
		ans = 1;
		scanf("%s", niz);
		if (!strcmp(niz, "0"))
			break;
		init(niz);
		llint t1 = 1, t2 = 0;
		for (int i = 0; i < strlen(niz); i++){
			if (R[i]){
				ans = t1 + t2;
				t2 = t1;
				t1 = ans;
			}else{
				t2 = t1;
				t1 = ans;
			}
		}
		printf("%llu\n", ans);
	}
}
