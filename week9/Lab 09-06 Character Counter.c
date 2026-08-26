#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char* str = malloc(sizeof(char) * 101);
    scanf("%100[^\n]s", str);
    int lw = 0;
    int up = 0;
    int num = 0;
    char* ptr = str;
    while(*ptr != '\0'){
        if (*ptr >= 'a' && *ptr <= 'z' )
            lw++;
        else if (*ptr >= 'A' && *ptr <= 'Z')
            up++;
        else if (*ptr >= '0' && *ptr <= '9')
            num++;
        ptr++;
    }
    printf("Lowercase letters: %d\n",lw);
    printf("Uppercase letters: %d\n",up);
    printf("Digits: %d",num);
}