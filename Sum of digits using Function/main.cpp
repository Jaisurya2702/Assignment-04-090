#include <stdio.h>

int sum(int num);

int main(void)
{
    int x;
    printf("Enter your number : ");
    scanf("%d", &x);
    printf("\nSum of digits of your number is : ");
    printf("%d", sum(x));
    printf("\n");
}

int sum(int num)
{
    if (num==0)
        return 0;
    return num%10 + sum(num/10);
}
