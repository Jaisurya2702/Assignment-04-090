#include <stdio.h>

void OddEven(int lower, int upper);

int main(void)
{
    int x, y;
    printf("Enter lower limit : ");
    scanf("%d", &x);
    printf("Enter upper limit : ");
    scanf("%d", &y);
    printf("\nEven/Odd numbers from %d to %d are :\n\n", x, y);
    OddEven(x, y);
    printf("\n");
}

void OddEven(int lower, int upper)
{
    if (lower>upper)
    {
        return;
    }
    else
    {
        printf("%d ", lower);
        OddEven(lower+2, upper);
    }
}
