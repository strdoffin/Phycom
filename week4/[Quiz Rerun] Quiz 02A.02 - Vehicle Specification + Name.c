#include <stdio.h>

int main(){
    char car[101];
    double a,b,c;
    scanf("%[^\n]",car);
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    printf("%.4lf\n%.4lf\n%.2lf\n%s",a,b,c,car);
    return 0;
}