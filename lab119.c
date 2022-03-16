//Allocate n elements dynamically to a pointer variable asign data and find sum of all n elements using
//pointer variable
#include <stdio.h>
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); //memory allocated using malloc
    printf("Enter the elements of array: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i); // ptr[i];
    }
    printf("Sum=%d", sum);
    free(ptr);
    return 0;
}