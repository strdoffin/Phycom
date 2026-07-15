#include <stdio.h>
#include <math.h>

int main(){
    double v,price, d, h;
    scanf("%lf",&price);
    scanf("%lf",&d);
    scanf("%lf",&h);
    d /= 2;
    v = h * 3.14159265359 * (pow(d,2.0));
    printf("Volume : %.2lfml\n",v);
    printf("Baht/ml : %.4lf",price/v);
    return 0;
}