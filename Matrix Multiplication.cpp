#include<cstdio>
#include<cstring>
using namespace std;

int n;
int A[100][100], B[100][100], R[100][100];
int main(){

    for( int i = 0; i< 100; i++)
        for( int j =0; j < 100; j++ )
            R[i][j] = 0;
    scanf("%d", &n);
    for( int i = 0; i< n; i++)
        for( int j =0; j < n; j++ )
            scanf("%d", &A[i][j]);
    for( int i = 0; i< n; i++)
        for( int j =0; j < n; j++ )
            scanf("%d", &B[i][j]);

    for( int i = 0; i< n; i++)
        for( int j =0; j < n; j++ )
            for( int k = 0; k < n; k++ )
                R[i][j] += A[i][k]*B[k][j];


       printf("matricaA\n\n");
    for( int i = 0; i< n; i++){
        for( int j =0; j < n; j++ )
            printf("%d ", A[i][j]);
        printf("\n");
    }
    printf("matricaB\n\n");
    for( int i = 0; i< n; i++){
        for( int j =0; j < n; j++ )
            printf("%d ", B[i][j]);
        printf("\n");
    }
    printf("rezultat\n\n");
    for( int i = 0; i< n; i++){
        for( int j =0; j < n; j++ )
            printf("%d ", R[i][j]);
        printf("\n");
    }
}
