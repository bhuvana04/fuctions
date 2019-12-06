#include <stdio.h>
#include <stdlib.h>
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
    c=sum(a,b);
    d=diff(a,b);
    printf("%d\n%d\n",c,d);
    return 0;
}
