#include <stdio.h>

int sumn(int lower, int upper);

int main(void)
{
    int x;
    printf("Enter the upper limit : ");
    scanf("%d", &x);
    printf("\nSum of natural numbers from 1 to %d is : \n\n", x);
    printf("%d", sumn(1, x));
    printf("\n");
}

int sumn(int lower, int upper)
{
    if (lower==upper)
    {
        printf("%d = ", upper);
        return upper;
    }
    else
    {

        printf("%d + ", lower);
        return lower + sumn(lower+1, upper);
    }
}
