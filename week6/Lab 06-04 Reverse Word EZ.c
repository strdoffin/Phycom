#include <stdio.h>

int main(){
    char text[101];
    char *t = text;
    scanf("%[^\n]",text);
    int len;
    while(*t != '\0'){
        len++;
        t++;
    }
    t--;
    while(*t != '\0'){
        printf("%c",*t);
        t--;
    }
    return 0;
}