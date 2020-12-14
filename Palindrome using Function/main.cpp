#include <stdio.h>
#include <math.h>

int pal(int num);
int rev(int num);

int main(void)
{
    int x;
    printf("Enter your number : ");
    scanf("%d", &x);
    printf("\nReverse of your number : %d\n", rev(x));
    if (pal(x)==1)
        printf("\nYour number is a palindrome.\n");
    else
        printf("\nYour number is not a palindrome.\n");
}


int pal(int num)
{
    if (rev(num)==num)
        return 1;
    else
        return 0;
}

int rev(int num)
{
    int digits = (int) log10(num);
    if (num==0)
        return 0;
    return ((num%10*pow(10,digits)) + rev(num/10));

}
