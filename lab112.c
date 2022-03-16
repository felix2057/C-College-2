// Program to access 2D Array(number of rows fixed but number of coloumn variable) using arrays pointer
//variable
#include <stdio.h>
int main()
{
    char a[] = "Yudhistir", b[] = "Bhim", c[] = "Arjun", d[] = "Nakul", e[] = "Sahadev", *p[5];
    int i;
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    p[4] = e;
    for (i = 0; i < 5; i++)
        printf("%s\n", p[i]);

    return 0;
}