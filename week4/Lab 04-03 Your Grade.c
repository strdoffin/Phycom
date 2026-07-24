#include <stdio.h>

int main(){
    char grade;
    scanf("%c",&grade);
    if (grade >= 65 && grade <= 90)
        grade += 32;
    switch (grade)
    {
        case 'a':
            printf("Genius");
            break;
        case 'b':
            printf("Good");
            break;
        case 'c':
            printf("Try Harder");
            break;
        case 'd':
            printf("Very Bad");
            break;
        case 'f':
            printf("Fail");
            break;
        default:
            printf("Invalid Input");
            break;
    }
    return 0;
}