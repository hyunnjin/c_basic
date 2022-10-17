/**
 * 논리연산자
 * 1. AND(&&)
 *      -두 조건이 모두 참인 경우에만 참
 * 조건1 | 조건2 | 결과
 * False |False | False
 * Teue |False | False
 * False |True | False
 * True |True | TRue 
 * 
 * 2. OR(||)
 *      - 조건 중에 1개라도 참이면 참
 * 조건1 | 조건2 | 결과
 * False |False | False
 * Teue |False | True
 * False |True | True
 * True |True | TRue 
 * 
 * &&, &
 * ||, |
 * 
 * 1개와 2개의 차이점
 *  1걔: 두개의 조건을 모두 검사 후 결과 도출
 *  2개: 1개 라도 맞으면 즉시 검사 결과 도출
*/
#include <stdio.h>

int main(void)
{
    int a = 30;
    int res;

    res = (a > 10) && (a < 20);
    printf("(a > 10) && (a < 20) : %d\n", res);
    res = (a < 10) || (a > 20);
    printf("(a < 10) ||(a > 20) : %d\n", res);
    res = !(a >= 10);
    printf("!(a >= 30) : %d\n", res);
}