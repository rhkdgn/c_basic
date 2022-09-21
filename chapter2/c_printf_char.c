#include <stdio.h>

/**
 *  vs code 단축키
 *  shift + Alt + N : C 실행
 *  Alt + shift + ↓ or ↑  : Line 복사
 *  Alt + ↓ or ↑ : Line 이동
 *  Ctrl + x : Line 삭제
 *  Ctrl + space : 자동 완성
*/

// '' : 문자(character) 'A', 'c', '!'
// "" : 문자열(string) "A", "ABC", "A!"
int main(void)
{
    /* code */
    printf("%c\n", 'A');
    printf("%s\n", 'A');
    printf("%c은 %s입니다.", '1', "first");
    return 0;
}
