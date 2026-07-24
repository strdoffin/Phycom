#include <stdio.h>

int main (){
    int a;
    scanf("%d",&a);
    if (a == 0){
        printf("Duck Type: Silent Duck");
    }else if (a >= 1 && a<= 10){
        printf("Duck Type: Chill Duck");
    }else if (a >= 11 && a<= 50){
        printf("Duck Type: Happy Duck");
    }else if (a> 50){
        printf("Duck Type: Talkative Duck");
    }else{
        printf("Error");
    }
}