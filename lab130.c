//Writing to a file
#include <stdio.h>
int main()
{
    FILE *fp;
    char s[80] = {"KIIT Deemed to be University"};
    fp = fopen("POEM.TXT", "w");

    if (fp == NULL)
    {
        puts("Cannot open file");
        exit();
    }
}