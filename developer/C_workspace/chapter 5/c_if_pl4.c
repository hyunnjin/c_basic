#include <stdio.h>
#include <string.h>

int main(void)
{
    int height, weight;
    printf("키(cm): ");
    scanf("%d", &height);
    printf("몸무게(kg): ");
    scanf("%d", &weight);
    //printf("%dcm, %dkg", height, weight);

    double height_m = (double)height / 100;
    //printf("%.2lf", height_m);

    double bmi = weight / height_m / height_m;
    printf("%.2lf\n", bmi);

    //bmi 에 문자열 저장
    //문자열: 배열173
    //문자열 배열 = 값을 못 넣음! > strcpy()함수를 통해서 값입력
    char bmi_degree[20];

    if(bmi >= 30)
    {
        strcpy(bmi_degree, "고도비만");
    }
    else if(bmi >= 25)
    {
        strcpy(bmi_degree, "비만");
    }
    else if(bmi >= 20)
    {
        strcpy(bmi_degree, "과체중");
    }
    else if(bmi >= 18.5)
    {
        strcpy(bmi_degree, "정상");
    }
    else{
        strcpy(bmi_degree, "저체중");
    }

    printf("신장 %dcm, 몸무게 %dkg", height, weight);
    printf("당신의 BMI지수는 %.2lf로 %s입니다.", bmi, bmi_degree);
}