#include <stdio.h>
#include <stdlib.h>

int main(){
    char * str = malloc(sizeof(char) * 100);
    scanf("%[^\n]s", str);
    char * ptr = str;
    int i = 0;
    while(*ptr++ != '\0')
        i++;
    printf("%d",i);
    
}