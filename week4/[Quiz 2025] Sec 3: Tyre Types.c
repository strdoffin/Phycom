#include <stdio.h>

int main(){
    char type;
    scanf("%c",&type);
    if (type >= 65 && type <= 90)
        type += 32;
    switch (type)
    {
    case 's':
        printf("Soft");
        break;
    
    case 'm':
        printf("Medium");
        break;
    
    case 'h':
        printf("Hard");
        break;
    
    case 'i':
        printf("Intermediate");
        break;
    
    case 'w':
        printf("Wet");
        break;
    
    default:
        break;
    }
}