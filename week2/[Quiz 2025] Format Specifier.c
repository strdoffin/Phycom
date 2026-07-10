#include <stdio.h>

int main(){
    int a;
    float b;
    char c;
    char d[20];
    scanf("%d",&a);
    scanf("%f",&b);
    scanf(" %c",&c);
    scanf("%s",d);
    printf("Integer: %d\n",a);
    printf("Float: %.3f\n",b);
    printf("Character: %c\n",c);
    printf("String: %s\n",d);
    return 0;
}