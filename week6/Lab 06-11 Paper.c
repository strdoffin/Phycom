#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    int result;
    scanf("A%d",&a);
    scanf(" A%d",&b);
    result = a-b;
    if (result < 0)
        result *= -1;
    printf("%.0lf",pow(2.0,result));
    return 0;
}