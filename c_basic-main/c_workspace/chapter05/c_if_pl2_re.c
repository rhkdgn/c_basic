#include <stdio.h>
// 학점 계산기 - 리팩토링
int main(void) {
    // 1번: 사용자로부터 점수 입력
    int score;
    char grade;

    printf("점수: ");
    scanf("%d", &score);

    if(score >=0 && score <= 100) {
        // 2.점수로부터 등급(A,B,C, ..) 판단


        if(score >= 91) {           // score: 100점이 최대(91~100)
            grade = 'A';
        } else if(score >= 81) {    // score: 90점이 최대(81~90)
            grade = 'B';
        } else if(score >= 71) {    // score: 80점이 최대(71~80)
            grade = 'C';
        } else if(score >= 61) {    // score: 70점이 최대(61~70)
            grade = 'D';
        } else {                    // score: 60점이 최대(0~60)
            grade = 'F';
        }
        // 3.점수와 등급을 출력
        printf("학생의 점수는 %d점으로 %c학점입니다.", score, grade);
    } else {
        // 점수: 0점 미만 또는 100점 초과
        printf("ERROR: 0~100점 사이에 값을 입력하세요.");
    }

}