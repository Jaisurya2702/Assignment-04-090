#include <stdio.h>

int hcf(int first, int second);

int main(void)
{
    int x, y;
    printf("Enter the first number : ");
    scanf("%d", &x);
    printf("Enter the second number : ");
    scanf("%d", &y);
    printf("\nGCD(HCF) of the two numbers is : ");
    printf("%d\n", hcf(x, y));
}

int hcf(int first, int second)
{
    if (second==0)
        return first;
    return hcf(second, first%second);
}
