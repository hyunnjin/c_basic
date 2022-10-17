/**
 * ��������
 * 1. AND(&&)
 *      -�� ������ ��� ���� ��쿡�� ��
 * ����1 | ����2 | ���
 * False |False | False
 * Teue |False | False
 * False |True | False
 * True |True | TRue 
 * 
 * 2. OR(||)
 *      - ���� �߿� 1���� ���̸� ��
 * ����1 | ����2 | ���
 * False |False | False
 * Teue |False | True
 * False |True | True
 * True |True | TRue 
 * 
 * &&, &
 * ||, |
 * 
 * 1���� 2���� ������
 *  1��: �ΰ��� ������ ��� �˻� �� ��� ����
 *  2��: 1�� �� ������ ��� �˻� ��� ����
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