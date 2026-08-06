#include <stdio.h>

int main(){
    char text[101];
    scanf("%[^\n]",text);
    int len = 0 ;
    while(text[len] != '\0')
        len++;
    for (int i = 0; i < len; i++)
    {
        if (text[i] != text[len - i - 1]){
            printf("It is not Palindrome.");
            return 0;
        }
    }
    printf("It is Palindrome.");
    return 0;
}