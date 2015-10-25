#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
using namespace std;


#define M 150

char in[M];
int a[M], b[M], c[M];
void cop(int *A, int *B){
	for (int i = 0; i < M; i++)
		B[i] = A[i];
}
void sub(int *A, int *B, int *R){
	int tmp[M];
	cop(A, tmp);
	for (int i = 0; i < M; i++)
	if (tmp[i] - B[i] < 0){
		R[i] = tmp[i] - B[i] + 10;
		tmp[i + 1]--;
	}
	else{
		R[i] = tmp[i] - B[i];
	}
}
void mul(int *A, int *R){
	memset(R, 0, sizeof R);
	for (int i = 0; i < M; i++){
		R[i] = A[i] * 2;
	}
	for (int i = 0; i < M; i++){
		R[i + 1] += R[i] / 10;
		R[i] %= 10;
	}
}
void print(int *A){
	int i = M - 1;
	while (!A[i] & i > 0)
		i--;
	for (; i >= 0; i--)
		putchar('0' + A[i]);
	putchar('\n');
}
int main(){
	while (scanf("%s", in) != EOF){
		memset(a, 0, sizeof a);
		for (int i = strlen(in) - 1, j =0; i >= 0; i--, j++)
			a[j] = in[i] - '0';
        if( !strcmp(in, "0") ){
            printf("0\n");
            continue;
        }else if( !strcmp(in, "1") ){
            printf("1\n");
            continue;
        }
		b[0] = 2;
		mul(a, c);
		sub(c, b, a);
		print(a);
	}
}
