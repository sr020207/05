#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	 int x;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("���밪�� %d �Դϴ�.\n", x);
    }
	else if (x < 0) {
        printf("���밪�� %d �Դϴ�.\n", -1*x);
    }
	else {
        printf("���밪�� 0�Դϴ�.");
    }

	return 0;
}
