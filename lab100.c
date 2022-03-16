//C program that takes input the X and Y coordinate of 10 differet points and
//find the total distance between first and last point that is the sum of
//distances between two consecutive points.
#include <stdio.h>
#include <math.h>
int main()
{
    int i, sqr;
    double x[10], y[10], x1, y1, dist, sum = 0.0;
    printf("\nEnter the coordinates of 3 points,in the form (X,Y):: ");
    for (i = 0; i < 10; i++)
        scanf("%lf %lf", &x[i], &y[i]);
    for (i = 0; i < 9; i++)
    {
        x1 = pow((x[i + 1] - x[i]), 2.0);
        y1 = pow((y[i + 1] - y[i]), 2.0);
        dist = sqrt(x1 + y1);
        sum += dist;
    }
    printf("\nDistance is= %lf\n", sum);
    return 0;
}