#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const int N = 4, M = 4;
int random ( int N ) { return rand() % N; };


int main() {

    int A[M][N],  i, j;
    printf("---------------------------- \n");

    for ( i = 0; i < M; i ++ )
        for ( j = 0; j < N; j ++ )
            A[i][j] = random(0-100+1) + 100;


    for ( i = 0; i < M; i ++ ) {
        for (j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf(" <- \n");
    }

    printf("---------------------------- \n");

    printf("Main diagonal ");
    for ( i = 0; i < N; i ++ )
        printf ("%d ", A[i][i]);
    printf("\n");

    printf("revert main diagonal ");
    for ( i = 0; i < N; i ++ )
        printf ("%d ", A[i][N-1-i]);
    printf("\n");

    printf("---------------------------- \n");

    printf("replace all values to zero below main diagonal\n");

    int B[M][N];

    memmove(B, A, sizeof(A));

//    for ( i = 0; i < M; i ++ )
//        for ( j = 0; j <= i; j ++ )
//            B[i][j] = 0;

    for ( i = 0; i < M; i++ ){
        printf("i = %d\n", i);
        for ( j = M - 1; j >= i; j-- ){
            printf("j = %d\n", j);
            B[i][j] = 0;
        }
    }


    for ( i = 0; i < M; i ++ ) {
        for (j = 0; j < N; j++) {
            printf("%d ", B[i][j]);
        }
        printf(" <- \n");
    }

    printf("---------------------------- \n");

    int C[M][N];

    for ( i = 0; i < M; i ++ )
        for ( j = 0; j < N; j ++ )
            C[i][j] = random(0-100+1) + 100;

    for ( i = 0; i < M; i ++ ) {
        for (j = 0; j < N; j++) {
            printf("%d ", C[i][j]);
        }
        printf(" <- \n");
    }

    printf("---------------------------- \n");

    printf("replace all values to zero below main diagonal\n");

    for ( i = 0; i < M; i ++ )
        for ( j = M - 1 - i; j < M ; j ++ )
            C[i][j] = 0;

    for ( i = 0; i < M; i ++ ) {
        for (j = 0; j <  N; j++) {
            printf("%d ", C[i][j]);
        }
        printf(" <- \n");
    }


    return 0;
}