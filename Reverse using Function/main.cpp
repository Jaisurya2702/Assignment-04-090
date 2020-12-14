#include <stdio.h>
#include <math.h>

int rev(int num);

int main(void)
{
    int x;
    printf("Enter your number : ");
    scanf("%d", &x);
    printf("Reverse of your number : %d\n", rev(x));
}

int rev(int num)
{
    int digits = (int) log10(num);
    if (num==0)
        return 0;
    return ((num%10*pow(10,digits)) + rev(num/10));

}
