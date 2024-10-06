#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of multiples of 3 is: %d", sum);

    return 0;
}