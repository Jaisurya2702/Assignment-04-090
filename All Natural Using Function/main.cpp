#include <stdio.h>

void NaturalRange(int lower,int upper);

int main(void)
{
    int x;
    printf("Enter the upper limit : ");
    scanf("%d", &x);
    printf("\nAll natural numbers are :\n\n");
    NaturalRange(1,x);
    printf("\n");
}

void NaturalRange(int lower, int upper)
{
    if (lower>upper)
    {
        return;
    }
    else
    {
        printf("%d ", lower);
        NaturalRange(lower+1, upper);
    }
}
