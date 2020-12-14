#include <stdio.h>

int lcm(int first, int second);

int main(void)
{
    int x, y;
    printf("Enter the first number : ");
    scanf("%d", &x);
    printf("Enter the second number : ");
    scanf("%d", &y);
    printf("LCM of the two numbers is : ");
    if (x>y)
        printf("%d", lcm(y, x));
    else if (y>x)
        printf("%d", lcm(x, y));
    else
        printf("%d", x);
    printf("\n");
}

int lcm(int first, int second)    /*first > second*/
{
    static int a=0;
    a+=second;
    if (a%first==0 && a%second==0)
        return a;
    return lcm(first, second);
}
