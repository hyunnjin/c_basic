#include <stdio.h>

/**
 * if문(제어문) 기본 문법
 * 
 * if(조건) {
 *      실행문} 
 * else if(조건) {
 *      실행문}
 *  else {
 * 실행문}
 * 
 * 
 * 조합 방법
 * 1. if() 단독
 * 2. if()~else
 * 3. if()~else if()
 * 4. if()~else if()~else
 * 
 * if 문은 반드시 if로 시작
 * else if()와 else는 필수 아님
 * if와 else는 1번만 사용가능
 * else if()여러번 사용가능
 * if문에서 체인으로 연결된 경우 위에서부터 참인 값 하나만 실행하고 빠져나감
*/

int main(void)
{
    int a = 20;
    int b = 0;

    //조건을 보고
    // 참: 블록문 안에 있는 코드 실행
    // 거짓: 다음으로 넘어감
    if(a > 10) {
        printf("a가 10보다 커요");
    }
}