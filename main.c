#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	float i;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	 
	printf("�и� �Է��ϼ��� : ");
	scanf("%d", &b);
	
	i = (float)a/b;
	printf("�������� ����� %f �Դϴ�.", i);
	
}
 
