#include <stdio.h>

/**
 * ������ ���� ��Ģ
 *  - �����ʹ� ����Ű�� ������ ���°� ���� ���� ���԰���
 *  - 
*/

int main(void) {
    int a = 10;     // a(100����)
    int *p = &a;    // p(100����)
    double *pd;     // pd(�ּ�) �ּҾ���
    // pd = p; (X)
    pd = (double *)p;
    printf("%1f\n", *pd);
}