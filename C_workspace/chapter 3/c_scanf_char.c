#include <stdio.h>

int main(void)
{
    char grade;      //학점(문자형) : char
    char name[20];  //이름(문자열형) : char 배열

    printf("학점입력: ");
    scanf("%c", &grade);
    printf("이름 입력: ");
    scanf("%S", name);

    printf("%s의 학점은 %c입니다.\n", name, grade);
}
