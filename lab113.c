// C Program to find simple intrest using function call by reference
#include <stdio.h>
float simpleint(float *p, float *t, float *r)
{
    float si;
    si = ((*p) * (*r) * (*t)) / 100;
    return si;
}
int main()
{
    float a, b, c;
    float i;
    printf("\nEnter Principal:");
    scanf("%f", &a);
    printf("\nEnter Year:");
    scanf("%f", &b);
    printf("\nEnter Rate:");
    scanf("%f", &c);
    i = simpleint(&a, &b, &c);
    printf("Simple Intrest =%f", i);
    return 0;
}