#include <stdio.h>
int main() {
	int n,i;
	
	//input the upper limit n
	printf ("enter a positive integer n");
	scanf("%d", &n);
	
	printf("number\tresult\n");
	printf("-----------------\n");
	
	for (i =1; i <=n; i++) {
		if (i% 2==0) {
			//even number - print cube
			printf("%d\t%d\n", i,i*i*i);
		}else{
			//odde number - print square
			printf("%d\t%d\n",i,i*i);
		}
	}
	return 0;
}
