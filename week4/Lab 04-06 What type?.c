#include <stdio.h>

int main(){
    char alpha;
    scanf("%c",&alpha);
    if (alpha >= 65 && alpha <= 90){
        printf("uppercase");
    } else if(alpha >= 97 && alpha <= 122){
        printf("lowercase");
    }else if(alpha >= 48 && alpha <= 57){
        printf("number");
    }else{
        printf("error");
    }
    return 0;
}