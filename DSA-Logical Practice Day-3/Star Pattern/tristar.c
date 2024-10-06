#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("* ", j);
        }
        printf("\n");
    }
    return 0;
}