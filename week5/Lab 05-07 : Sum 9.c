#include <stdio.h>

int main(){
    int summ,i;
    summ = 0;
    do{
        scanf("%d", &i);
        if (i != -9){
            summ+=i;
        }
    }while(i!= -9);
    printf("%d",summ);
    return 0;
}