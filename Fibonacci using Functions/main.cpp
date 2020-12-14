#include <stdio.h>

int fib(int num);

int main(void)
{
    int x;
    printf("Enter the term : ");
    scanf("%d", &x);
    printf("The %dth term of Fibonacci series is : ", x);
    printf("%d\n", fib(x));
}

int fib(int num)
{
    if (num==0)
        return 0;
    else if (num==1)
        return 1;
    return fib(num-1) + fib(num-2);
}
