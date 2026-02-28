#include<stdio.h>


// Iterative Fibonacci(order n Time Complexity)
int fib(int n){
    int to = 0, t1 = 1, s = 0, i;
    if(n<=1)
        return n;
    for ( i = 2; i <= n; i++)
    {
        s = to+t1;
        to=t1;
        t1=s;
    }
    return s;
}


// Recursive Fibonacci(Exponential Time Complexity)(Excessive recursion)
int rfib(int n){
    if (n<=1)
    {
        return n;
    }
    return rfib(n-2) + rfib(n-1);
}

int F[10];


// Memoized Fibonacci(less recursion)(order n Time Complexity)
int mfib(int n){
    if (n<=1)
    {
        F[n] = n;
        return n;
    }
    else{
        if (F[n-2] == -1)
        {
            F[n-2] = mfib(n-2);
        }
        if (F[n-1] == -1)
        {
            F[n-1] = mfib(n-1);
        }
        return F[n-2]+F[n-1];
    }
}

int main(){
    int i;
    for ( i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    
    printf("%d\n",mfib(6));
    printf("%d\n",rfib(6));
    printf("%d\n",fib(6));
    return 0;
}