//C Program to find length of the string
#include <stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter a string: ");
    scanf("%s",str);
    while(str[i] !='\0')
      ++i;
    printf("Length of the string: %d",i);
    return 0;
}