#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
using namespace std;

#define M 150

char in[M];
int a[M], b[M], c[M], d[M];
void sum(int *A, int *B, int *R){
	memset(R, 0, sizeof R);
	for (int i = 0; i < M; i++)
		R[i] = A[i] + B[i];
	for (int i = 0; i < M; i++)
	if (R[i] >= 10){
		R[i + 1] += R[i] / 10;
		R[i] %= 10;
	}
	return;
}
void div(int *A, int *R){
	memset(R, 0, sizeof R);
	for (int i = 0; i < M; i++ )
	if (A[i] % 2){
		R[i] = A[i] / 2;
		R[i - 1] += 5;
	}else
		R[i] = A[i] / 2;
}
void cop(int *A, int *B){
	for (int i = 0; i < M; i++)
		B[i] = A[i];
}
void sub(int *A, int *B, int *R){
	int tmp[M];
	cop(A, tmp);
	for (int i = 0; i < M; i++ )
		if (tmp[i] - B[i] < 0){
			R[i] = tmp[i] - B[i] + 10;
			tmp[i + 1]--;
		}else{
			R[i] = tmp[i] - B[i];
		}
}

void print(int *A){
	int i = M - 1;
	while (!A[i])
		i--;
	for (; i >= 0; i--)
		putchar('0' + A[i]);
	putchar('\n');
}
int main(){
	for (int k = 0; k < 10; k++){
		memset(a, 0, sizeof a);
		memset(b, 0, sizeof b);
		scanf("%s", in);
		for (int i = strlen(in) - 1, j = 0; i >= 0; i--, j++)
			a[j] = in[i] - '0';
		scanf("%s", in);
		for (int i = strlen(in) - 1, j = 0; i >= 0; i--, j++)
			b[j] = in[i] - '0';

		sum(a, b, d);
		div(d, c);
		cop(c, d);
		sub(d, b, c);
		print(d);
		print(c);
	}
}
