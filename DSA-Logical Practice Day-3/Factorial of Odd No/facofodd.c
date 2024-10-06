#include <stdio.h>
int main()
{
    int n;
    int sum = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum * i;
        }
    }
    printf("Sum of odd numbers is: %d", sum);
    return 0;
}