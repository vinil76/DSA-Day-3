#include <stdio.h>
int main()
{
    int a;
    char b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf(" %c", &b);

    for (int i = 0; i <= a; i++)
    {
        for (int j = b; j <= a; j++)
        {
            printf("%c ", j);
            b = b + 1;
        }
        printf("\n");
    }

    return 0;
}