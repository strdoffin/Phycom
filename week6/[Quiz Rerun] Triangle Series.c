#include <stdio.h>

int main(){
    unsigned int summ=0,n;
    scanf("%d",&n);
    for (int i =1; i <= n; i++)
        summ+=i;
    printf("%u",summ);
}