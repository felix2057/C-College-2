//Display contents of a file on screen
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("PR1.C", "r");
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp); 
    return 0;
}