#include<stdio.h>

unsigned long long factorial(int n) {
	if (n == 0 || n== 1)
	return 1;
	else 
	return n* factorial (n-1);
}
int main() {
	int num;
	printf("enter a non-negative integer:");
	scanf("%d", &num);
	if (num<0) {
		printf("factorial is not defined for negative numbers.\n");
		return 1;
	}
	printf("factorial of %d is: %11u\n", num, factorial(num) );
	return 0;
}
