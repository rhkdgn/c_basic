#include <stdio.h>

/**
 * 포인터 대입 규칙
 *  - 포인터는 가리키는 변수와 형태가 같을 때만 대입가능
 *  - 
*/

int main(void) {
    int a = 10;     // a(100번지)
    int *p = &a;    // p(100번지)
    double *pd;     // pd(주소) 주소없쯤
    // pd = p; (X)
    pd = (double *)p;
    printf("%1f\n", *pd);
}