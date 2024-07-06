#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5, b = 7;

    printf("%d\n", a);
    printf("%d\n", b);

    swap(&a,&b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}