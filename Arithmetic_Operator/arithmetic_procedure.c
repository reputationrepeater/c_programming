#include<stdio.h>

int main()
{
    //int a = 5*2-2*3;
    //int a = 5*2/2*3;[Left procedure will be first and then others]
    //int a = 5*(2/2)*3;[Bracket will be first priority]
    int a = 5+2/2*3;
    //int b = 4*3/6*2;
    //int c = 6*3/6*2;

    printf("Here is the value of a: %d\n", a);
    //printf("Here is the value of b: %d\n", b);
    //printf("Here is the value of c: %d\n", c);
    return 0;
}
