#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
 int answer = 59;
    int guess;
    int trials = 0;

    do {
        printf("Guess a number : ");
        scanf("%d", &guess);
        trials++;

        if (guess > answer) {
            printf("high!\n");
        } else if (guess < answer) {
            printf("low!\n");
        } else {
            printf("Congratulation! \n");
            printf("trials:%d\n", trials);
        }
    } while (guess != answer);

    return 0;
}
