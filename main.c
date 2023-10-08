#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
 int num1, num2;
    char operator;
    
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("= %d\n", num1 + num2);
            break;
        case '-':
            printf("= %d\n", num1 - num2);
            break;
        case '*':
            printf("= %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f\n", (float)num1 / num2);
            } else {
                printf("0으로 나눌 수 없습니다.\n");
            }
            break;
        default:
            printf("올바른 연산자를 입력하세요.\n");
    }

	return 0;
}
