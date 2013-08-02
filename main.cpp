#include <stdio.h>
int pascal(int,int);
int fact(int);
int main()
{
    int i,j,x;
    scanf("%d",&x);
    i=0;
    j=0;
    while (i<x) {
        while (j<x) {
            x=pascal(i,j);
            printf("%d",x);
            j++;
        }
        i++;
        j=0;
    }
}
int pascal(int m,int n)
{
    pascal=fact(m)/(fact(n)*fact(m-n));
    return pascal;
}
int fact(int x) {
    int i,fact;
    fact=1;
    if (x=0) {
        fact=1;
    }
    else {
        fact=x*fact(x-1);
    }
    return fact;
}
