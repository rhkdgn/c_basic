/**
 * ��������
 * 1.AND(&&)
 *   - �� ������ ��� ���� ��쿡�� ��!
 *   - �������л��̸鼭 1�г��̸� ���� ���� �ٰԿ�!!
 * ����1  |  ����2  |  ���
 * Flase  | False   | False
 * True   | False   | False
 * Flase  | True    | False
 * True   | True    | True
 *  
 * 2.OR(||)
 *   - ���� �߿� 1���� ���̸� ��!
 *   - �������л��̰ų� 1�г��̸� ���� ���� �ٰԿ�!!
 *    �� ������(1, 2, 3, 4), Ÿ����(1)
 * ����1  |  ����2  |  ���
 * Flase  | False   | False
 * True   | False   | True
 * Flase  | True    | True
 * True   | True    | True
 * 
 * 
 * %%, %
 * ||, |
 * 
 * 1�� ���� ���� 2�� ���� ���� ��������?
 *  - 1��(&, |): 2���� ������ ��� �˻� �� ��� ����
 *  - 2��(&&, ||): 1���� �������� �����ϸ� ��� ����
*/
#include <stdio.h>

int main(void) {
    int a = 30;
    int res;

    res = (a > 10) && (a < 20);
    printf("(a > 10) && (a < 20) : %d\n", res);
    res = (a < 10) || (a > 20);
    printf("(a < 10) || (a > 20) : %d\n", res);
    res = !(a >= 30);
    printf("!(a >= 30) : %d\n", res);
}
