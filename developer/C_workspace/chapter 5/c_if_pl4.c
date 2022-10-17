#include <stdio.h>
#include <string.h>

int main(void)
{
    int height, weight;
    printf("Ű(cm): ");
    scanf("%d", &height);
    printf("������(kg): ");
    scanf("%d", &weight);
    //printf("%dcm, %dkg", height, weight);

    double height_m = (double)height / 100;
    //printf("%.2lf", height_m);

    double bmi = weight / height_m / height_m;
    printf("%.2lf\n", bmi);

    //bmi �� ���ڿ� ����
    //���ڿ�: �迭173
    //���ڿ� �迭 = ���� �� ����! > strcpy()�Լ��� ���ؼ� ���Է�
    char bmi_degree[20];

    if(bmi >= 30)
    {
        strcpy(bmi_degree, "����");
    }
    else if(bmi >= 25)
    {
        strcpy(bmi_degree, "��");
    }
    else if(bmi >= 20)
    {
        strcpy(bmi_degree, "��ü��");
    }
    else if(bmi >= 18.5)
    {
        strcpy(bmi_degree, "����");
    }
    else{
        strcpy(bmi_degree, "��ü��");
    }

    printf("���� %dcm, ������ %dkg", height, weight);
    printf("����� BMI������ %.2lf�� %s�Դϴ�.", bmi, bmi_degree);
}