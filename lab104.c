//Function call by reference
#include<stdio.h>
swapbyRef(int*x,int*y)
{
    int t;
    t =*x;
    *x=*y;
    *y=t;
    printf("\nx = %d y = %d", *x,*y);
}
int main()
{
    int a=10,b=20;
    swapbyRef(&a,&b);
    printf("\na = %d b = %d",a,b);
    return 0;
}