#include <stdio.h>

int main(){
    double a;
    scanf("%lf",&a);
    if (a>=0 && a <= 5.032){
        printf("Bangkok");
    }else if (a > 5.032 && a <= 35.477){
        printf("Samut Prakarn");
    }else if ( a > 35.477 && a <= 52.900){
        printf("Chachoengsao");
    }else if (a > 52.900 && a <= 58.855){
        printf("Chon Buri");
    }else{
        printf("InValid");
    }
    return 0;
}