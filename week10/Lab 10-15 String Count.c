#include <stdio.h>
#include <ctype.h>
 
int main(){
    char text[151];
    char target;
    int count = 0;
    scanf("%c",&target);
    scanf(" %150[^\n]s",text);
    char *r = text;
    while(*r != '\0'){
        if (tolower(*r) == tolower(target))
            count++;
        r++;
    }
    printf("%d",count);
}