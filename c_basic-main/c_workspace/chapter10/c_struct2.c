#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];  // char배열 → 문자열(stirng)
    int age;        // 나이
    double height;  // 신장(키)
    char *intro;    // 자기소개 → 포인터(주소)
};

int main(void) {
    struct profile hoo;     // 선언을 해야 구조체 생성

    strcpy(hoo.name, "박광후"); // <string.h>
    hoo.age = 20;
    hoo.height = 183.0;

    // malloc() 함수
    //  - 메모리 동적 할당
    //  - ()안에 값은 Byte 의미
    //  - 반드시 free()로 해제

    // 동적 할당
    //  - 필요할 때 동적으로 메모리를 사용!
    hoo.intro = (char*)malloc(80);      //intro 포인터에 80Byte 할당 메모리의 시작주소 저장
    printf("자기소개: ");
    gets(hoo.intro);

    printf("이름 : %s\n", hoo.name);
    printf("나이 : %d\n", hoo.age);
    printf("키 : %.1lf\n", hoo.height);
    printf("자기소개 : %s\n", hoo.intro);
    free(hoo.intro);    //동적 할당 메모리 해제
}