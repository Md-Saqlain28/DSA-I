#include<stdio.h>

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int nCr(int n, int r) {
    if (r > n) return 0;
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    return num / den;
}

// Alternative recursive implementation without factorials
int NCR(int n, int r){
    if (n==r || r==0)
    {
        return 1;
    }
    else{
        return NCR(n-1,r-1) + NCR(n-1,r);
    }
}


int main() {
    printf("nCr(5, 2) = %d\n", NCR(5, 2));
    return 0;
}