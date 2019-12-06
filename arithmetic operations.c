#include <stdio.h>
#include <stdlib.h>
int (*fptr[2])(int,int);
int sum(int x,int y)
{
int z=x+y;
return z;
}
int diff(int x,int y);
{
int z=x-y;
return z;
}
int main()
{
    int a=10,b=5,c,d;
    fptr[0]=sum;
    c=fptr[0](a,b);
    fptr[1]=diff;
    d=fptr[1](a,b);
    printf("%d\n%d\n",c,d);
    return 0;
}
