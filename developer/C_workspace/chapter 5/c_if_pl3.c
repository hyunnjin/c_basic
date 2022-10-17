#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("첫번째 수: ");
    scanf("%d", &num1);
    printf("두번째 수: ");
    scanf("%d", &num2);
    
    printf("%d, %d\n", num1, num2);

    // 조건
    // 1. 수1이 수2보다 큰경우 출력
    if (num1 > num2)
    {
        printf("num1 > num2");
    }
    // 2. 수1이 수2보다 작은경우 출력
    else if (num1 < num2)
    {
        printf("num1 < num2");
    }
    //3. 수1이 수2와 같다 출력
    else{
        printf("num1 = num2");
    }
}