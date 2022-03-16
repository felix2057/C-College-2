//Allocate & assign dynamically 2D Array ([n][Col]) where column size is fixed to col to a pointer
//and find the sum of all elements
#include <stdio.h>
#define col 5
int main()
{
    int n, i, j, sum = 0;
    int(*a)[col]; //pointer to 5 elements in a row
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    a = (int(*)[col])malloc(n * col * sizeof(int));
    for (i = 0; i < n; i++)
        for (j = 0; j < col; ++j)
            ;
    {
        scanf("%d", &a[i][j]);
        sum += a[i][j];
    }
    return 0;
}