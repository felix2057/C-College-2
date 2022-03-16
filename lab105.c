//Find sum of first n elements of two arrays, return 0 (equal sum),1(1st array sum is larger),
//or 2(1st array sum is larger)
#include <stdio.h>
int large_sum(int *a, int *b, int n)
{
    int i, s1 = 0, s2 = 0;
    for (i = 0; i < n; i++)
    {
        s1 += a[i];
        s2 += b[i];
    }
    if (s1 == s2)
        return 0;
    else if (s1 > s2)
        return 1;
    else
        return 2;
}