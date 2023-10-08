#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("입력한 숫자는 양수입니다.\n");
    } else if (num < 0) {
        printf("입력한 숫자는 음수입니다.\n");
    } else {
        printf("입력한 숫자는 0입니다.\n");
    }

	return 0;
}
