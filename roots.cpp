#include <stdio.h>
int main(){
	double x, fx;
	double tolerance = 0.0001;
	int found=0;
	
	//try values from -100 t0 100 in steps of 0.01
	for (x= -100; x<=100; x +=0.01) {
		fx = x*x - 5*x + 6;
		
		// check if fx is close enough to 0 (within Aatolerance)
		
		if (fx > -tolerance && fx < tolerance) {
			printf("one real root found: x=%.2f\n", x);
			 found =1;
			 break; // stop after finding one root
		}
	}
	if (!found) {
		printf("no root found in the given range.\n");
	}
	return 0;
}
