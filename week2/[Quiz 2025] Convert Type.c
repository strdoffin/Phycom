#include <stdio.h>

int main(){
    int a;
    float b;
    char c;
    scanf("%d\n%f\n%c",&a,&b,&c);
    printf("%.3f\n%d\n%d",(float)a,(int)b,c);
    return 0;
}