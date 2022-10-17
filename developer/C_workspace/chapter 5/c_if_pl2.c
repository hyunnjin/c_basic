#include <stdio.h>

int main(void)
{
    int score;
    char grade;

    printf("Á¡¼ö: ");
    scanf("%d", &score);
    
    if (score <=100 && score >= 0){

        if(score >= 91) {
            grade = 'A';
        } else if(score >= 81){
            grade = 'B';
        } else if(score >= 71) {
            grade = 'C';
        } else if(score >= 61) {
            grade = 'D';
        } else {
            grade = 'F';
        }

    printf("%d, %c", score, grade);
    }
}