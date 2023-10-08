#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
 char string[100]; 
    int digit = 0;
    char c;

    printf("Input a string : ");

    int i = 0;
    while ((c = getchar()) != '\n') {
        string[i++] = c;
    }
    string[i] = '\0'; 
    
    
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] >= '0' && string[i] <= '9') {
            digit++;
        }
    }

    printf("The number of digits is %d\n", digit);

    return 0;
}
