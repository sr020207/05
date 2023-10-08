#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	 int x;

    printf("정수를 입력하세요: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("절대값은 %d 입니다.\n", x);
    }
	else if (x < 0) {
        printf("절대값은 %d 입니다.\n", -1*x);
    }
	else {
        printf("절대값은 0입니다.");
    }

	return 0;
}
