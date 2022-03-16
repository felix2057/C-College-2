//A file copy program
#include <stdio.h>
int main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("pr1.c", "r");
    if (fs == NULL)
    {
        puts("Cannot open source file");
        exit();
    }
    ft = fopen("pr2.c", "w");
    if (ft == NULL)
    {
        puts("Cannot open target file");
        fclose(fs);
        exit();
    }
    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, ft);
    fclose(fs);
    fclose(ft);
}