#include<stdio.h>

int swap(int *num1, int *num2) {
	int *temp;
	
	*temp = *num1;
	*num1 = *num2;
	*num2 = *temp;
}

int main(void) {
	int a = 5, b = 7;
	
	printf("First number before swap = %d\n", a);
	printf("Second number before swap = %d\n", b);
	
	swap(&a,&b);
	
	printf("First number before swap = %d\n", a);
	printf("Second number before swap = %d\n", b);
	
}
