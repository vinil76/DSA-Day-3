#include <stdio.h>
int main()
{
    int ver;
    int hor;
    printf("Enter the number of vertical lines : ");
    scanf("%d", &ver);
    printf("Enter the number of horizontal lines : ");
    scanf("%d", &hor);

    for (int i = 1; i <= ver; i++)
    {
        for (int j = 1; j <= hor; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}