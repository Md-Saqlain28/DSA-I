#include <stdio.h>
//Normal 
double e(int x, int n){
    static double p=1, f=1;
    double r;
    if(n==0)
        return 1;
    r = e(x, n-1);
    p = p * x;
    f = f * n;
    return r + p/f;
}

//Horners rule
double e1(int x, int n){
    static double s;
    if (n==0)
    {
        return s;
    }
    s = 1+ x*s/n;
    return e1(x,n-1);
    
}

//iterative
double e2(int x, int n){
    double s=1;
    int i;
    double num = 1;
    double den = 1;

    for ( i = 1; i <=n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main(){
    printf("%lf \n", e2(1,10));
    return 0;
}