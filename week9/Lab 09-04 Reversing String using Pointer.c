#include <stdio.h>
#include <stdlib.h>

int main(){
    char * str = malloc(sizeof(char) * 101);
    scanf("%100[^\n]s", str);
    char * ptr = str;
    int i = 0;
    while(*ptr++ != '\0')
        i++;
    ptr--;
    while (ptr != str)
    {
        printf("%c",*--ptr);
    }
    printf("\n");
    free(str);
    return 0;
}