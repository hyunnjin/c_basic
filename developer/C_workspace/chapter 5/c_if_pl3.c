#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("ù��° ��: ");
    scanf("%d", &num1);
    printf("�ι�° ��: ");
    scanf("%d", &num2);
    
    printf("%d, %d\n", num1, num2);

    // ����
    // 1. ��1�� ��2���� ū��� ���
    if (num1 > num2)
    {
        printf("num1 > num2");
    }
    // 2. ��1�� ��2���� ������� ���
    else if (num1 < num2)
    {
        printf("num1 < num2");
    }
    //3. ��1�� ��2�� ���� ���
    else{
        printf("num1 = num2");
    }
}