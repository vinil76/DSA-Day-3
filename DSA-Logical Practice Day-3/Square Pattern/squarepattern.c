#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    for (int i = 0; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}