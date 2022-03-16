// C Program to copy string from src to dst
#include <stdio.h>
int main()
{
    char i = 0, src[100], dst[100];
    printf("Enter source string: ");
    scanf("%s", src);
    while (src[i] != '\0')
        dst[i] = src[i++];
    dst[i] = '\0';
    printf("\n Destination String: %s", dst);
    return 0;
}