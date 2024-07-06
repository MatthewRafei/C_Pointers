#include <stdio.h>
#include <stdlib.h>

void findMinMax(int num1, int num2, int *pMin, int *pMax)
{
    if(num1 > num2){
        *pMin = num2;
        *pMax = num1;
    }
    else {
        *pMin = num1;
        *pMax = num2;
    }

}

int main()
{

    int a = 5, b = 3;

    int min, max;

    findMinMax(a, b, &min, &max);

    printf("The min is %d and the max is %d\n", min, max);

    return 0;

}