#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    do
    {
        printf("%d ",number--);
    } while (number>0);
    return 0;
}