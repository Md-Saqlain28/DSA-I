#include<stdio.h>

int main(){
    int A[5] = {2,4,6,8,10};
    int *P;
    int i;
    P = (int *) malloc (5 * sizeof(int));
    P[0] = 1;
    P[1] = 2;
    P[2] = 3;
    P[3] = 4;
    P[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("%d", A[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", P[i]);
    }
    return 0;
}