#include <stdio.h>

int main(){
    char alpha;
    scanf("%c",&alpha);
    if (alpha >= 65 && alpha <= 90){
        alpha += 32;
    } else if(alpha >= 97 && alpha <= 122){
        alpha -= 32;
    }else {
        printf("error");
        return 0;
    }
    printf("%c",alpha);
    return 0;
}