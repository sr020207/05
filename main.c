#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int num;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("�Է��� ���ڴ� ����Դϴ�.\n");
    } else if (num < 0) {
        printf("�Է��� ���ڴ� �����Դϴ�.\n");
    } else {
        printf("�Է��� ���ڴ� 0�Դϴ�.\n");
    }

	return 0;
}
