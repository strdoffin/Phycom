#include <stdio.h>

int main(){
    char *text[] = {};
    for (int i = 0; i < 2; i++)
    {
        scanf(" %[^\n]", *text);
        *(text++);
    }
    
}