#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];  // char�迭 �� ���ڿ�(stirng)
    int age;        // ����
    double height;  // ����(Ű)
    char *intro;    // �ڱ�Ұ� �� ������(�ּ�)
};

int main(void) {
    struct profile hoo;     // ������ �ؾ� ����ü ����

    strcpy(hoo.name, "�ڱ���"); // <string.h>
    hoo.age = 20;
    hoo.height = 183.0;

    // malloc() �Լ�
    //  - �޸� ���� �Ҵ�
    //  - ()�ȿ� ���� Byte �ǹ�
    //  - �ݵ�� free()�� ����

    // ���� �Ҵ�
    //  - �ʿ��� �� �������� �޸𸮸� ���!
    hoo.intro = (char*)malloc(80);      //intro �����Ϳ� 80Byte �Ҵ� �޸��� �����ּ� ����
    printf("�ڱ�Ұ�: ");
    gets(hoo.intro);

    printf("�̸� : %s\n", hoo.name);
    printf("���� : %d\n", hoo.age);
    printf("Ű : %.1lf\n", hoo.height);
    printf("�ڱ�Ұ� : %s\n", hoo.intro);
    free(hoo.intro);    //���� �Ҵ� �޸� ����
}