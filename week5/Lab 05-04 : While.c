#include <stdio.h>

int main(){
    int number;
    int i;
    i = 1;
    scanf("%d",&number);
    while (i<=number)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}