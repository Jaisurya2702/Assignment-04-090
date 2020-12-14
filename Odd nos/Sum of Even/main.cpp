#include <stdio.h>

int sumoe(int lower, int upper);

int main(void)
{
    int x, y;
    printf("Enter lower limit : ");
    scanf("%d", &x);
    printf("Enter upper limit : ");
    scanf("%d", &y);
    printf("\nSum of Even/Odd numbers from %d to %d is : \n\n", x, y);
    printf("%d", sumoe(x, y));
    printf("\n");
}

int sumoe(int lower, int upper)
{
    if (lower==upper)
    {
        printf("%d = ", upper);
        return upper;
    }
    else
    {
        printf("%d + ", lower);
        return lower + sumoe(lower+1, upper);
    }
}
