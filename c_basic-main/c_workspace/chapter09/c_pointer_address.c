#include <stdio.h>

/**
 * �ּҿ� ������
 *   - �ּ�: �޸𸮹����� �ּ�(��: 21����, 99����)
 *   - �ּ� �� ���
 *   - ������ �� ����(�ּ�)
 * 
 *   int a, b;  #a(100����) b(200����)
 *   int *p;
 *   p = &a;    #p(100����)
 *   p = &b;    #p(200����)
 *   �� p�� 100����, 200���� : ����
 *   �� &a, &b�� �ּ� : ���
 * 
 *   - �� �����Ͱ� ���� �ּ� ����
 *      (�ϳ��� ������ ���ÿ� ����Ű�� �͵� ����)
 *   int a;     #99����
 *   int *pa, *pb;
 *   pa = pb = &a;
 *   *pa = 10;
 *   printf("%d", *pb);
 * 
 *   - �ּҴ� ����̱� ������ ���Կ����� ���ʿ� ��� �Ұ�
 *     a(100����) b(200����)
 *     &a = &b; (X)
 *     const int num = 4;
 *     num = 10;  (X)   #����ϱ� �ȵ��� �� �ּҵ� ����ϱ� ���Կ����� �Ұ����ϴ�.
 * 
 * 
*/

int main(void) {
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char ���� �ּ� ũ��: %d\n", sizeof(&ch));
    printf("int ���� �ּ� ũ��: %d\n", sizeof(&in));
    printf("double ���� �ּ� ũ��: %d\n", sizeof(&db));

    printf("char *������ �ּ� ũ��: %d\n", sizeof(pc));
    printf("int *������ �ּ� ũ��: %d\n", sizeof(pi));
    printf("double *������ �ּ� ũ��: %d\n", sizeof(pd));

    printf("char �����Ͱ� ����Ű�� �ּ� ũ��: %d\n", sizeof(*pc));
    printf("int �����Ͱ� ����Ű�� �ּ� ũ��: %d\n", sizeof(*pi));
    printf("double �����Ͱ� ����Ű�� �ּ� ũ��: %d\n", sizeof(*pd));
}