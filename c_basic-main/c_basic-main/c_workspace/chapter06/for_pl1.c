#include <stdio.h>

// 1~10의 값의 총합 계산
int main(void) {
    int sum = 0; //총합 누적

    // 작성해보세요.(for문 활용)
    //for문 활용해서 1~10까지 값을 덧셈하는 코드
    //1~ 10까지 값이 1씩 증가  i 대체
    for(int i=1; i <=10; i++) {
        sum = sum + i;
        // sum += i; sum이랑 i랑 먼저 더하고 는 값
    }
    printf("누적 총합: %d\n", sum);
}