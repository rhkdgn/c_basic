#include <stdio.h>

// 1~10까지 값을보고 짝수면 짝수출력 홀수면 홀수 출력
int main(void) {

    for(int i =1; i<=10; i++) {
        // if(0) → false
        // if(1) → true
        if(i % 2) {  // 만약 i가 5라면 2로 나누었을 때 나머지는 1이나오고 위의 설명과 같이 true로 홀수가 나온다.
        printf("홀수");
        } else {
            printf("짝수");
        }
    
    }

}