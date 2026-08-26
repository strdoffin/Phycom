#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int size;
    int jump;
    scanf("%d",&size);
    scanf("%d",&jump);
    char* str = malloc(sizeof(char) * (size+1));
    scanf(" %[^\n]s", str);

    char* ptr = str;
    while(ptr < str + size && *ptr != '\0'){
        printf("%c",*ptr);
        ptr+=jump;
    }
}