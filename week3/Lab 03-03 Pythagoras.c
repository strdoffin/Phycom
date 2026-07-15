#include <stdio.h>
#include <math.h>

int main(){
    double a, b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("%.2lf",sqrt(pow(a,2.0)+pow(b,2.0)));
    return 0;
}