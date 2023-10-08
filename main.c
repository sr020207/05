#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	 float x;
	 float sum;
	 
	 printf("Input a number : ");
	 scanf("%f", &x);

    sum = (1 + x) * (x/2);
    
    printf("The result is %.0f", sum);

	return 0;
}
