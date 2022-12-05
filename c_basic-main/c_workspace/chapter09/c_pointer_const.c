#include <stdio.h>


/**
 * 변수 앞에 const → 상수(값을 고정)
 * 포인터 변수 앞에 const를 붙이면?
 *   - 상수 포인터 가능
 *     a=20 (O) : 참조하고 있는 일반 변수에 값 변경 가능
 *     pa= &b (o) : 포인터 변수가 참조하는 주소 변경 가능
 *     *pa = 20 (X) : 직접 참조하여 값 변경 불가능
 * 
*/
int main(void) {
    int a=10, b=20;      // 21번지, 22번지
    const int *pa = &a;  // 21번지
    printf("변수 a 값:  %d\n", *pa);
    pa = &b;
    printf("변수 a 값:  %d\n", *pa);
    pa = &a;
    a=20;
    //*pa = 50; // pa → 상수 포인터
              // 포인터를 통해 직접 참조하여 값 변경 불가
    printf("변수 a 값:  %d\n", *pa);


}