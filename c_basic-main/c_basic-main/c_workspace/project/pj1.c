#include <stdio.h>

/**
 * 숫자: 5자리
 * 예: 57256
*/
int main(void) {
    int num =57256;
    int total = 0;

    //코드
    int a = num/10000;
    int b = ((num/1000) - (a*10));
    int c = ((num/100)-(a*100)-(b*10));
    int d = ((num/10)-(a*1000)-(b*100)-(c*10));
    int e = (num-(a*10000)-(b*1000)-(c*100)-(d*10));
    total = a+b+c+d+e;
    // 5 + 7 + 2 + 5 + 6 = 25
    printf("총합 %d\n", total);
}