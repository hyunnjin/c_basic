#include <stdio.h>

//�ַ� �Ǹű�
// -�������� ���̸� �Է¹ް�
// -���̿� ���� �ַ��Ǹ�/�Ұ�

int main(void)
{
    //����ڷκ��� ���̸� �Է�
    int age;

    printf("����: ");
    scanf("%d", &age);

    printf("���̴� %d\n", age);

    if(age >= 20){
        printf("�����Դϴ�\n");
        printf("�ַ� ���Ű� �����մϴ�\n");
    } else if(age <= 19) {
        printf("�̼������Դϴ�\n");
        printf("�ַ� ���Ű� �Ұ����մϴ�\n");
    }
    //else if(age <= 19) {
    //    printf("�̼������Դϴ�\n");
    //    printf("�ַ� ���Ű� �Ұ����մϴ�\n");
    //}
}