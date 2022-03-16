// Write a program to pick up the largest number from any 5 rows by 5 column matrix.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5][5], i, j, max = 0;
    
    printf("Enter any 5x5 matrix= ");
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
            scanf("%d", &a[i][j]);
        printf("\n");
    }
    max = a[0][0];
    for (i = 0; i <= 4; i++)
        for (j = i + 1; j <= 4; j++)
            if (max < a[i][j])
                max = a[i][j];
    printf("Max. value in Matrix is = %d", max);
    return 0;
}