#include <stdio.h>
#include <math.h>

int main(){
    double h, u , rad;
    scanf("%lf\n%lf",&rad,&u);
    h = (u*u*pow(sin((rad * 3.141592653589793) /180.0),2.0))/(2 * 9.81);
    printf("theta (degree) : %.0lf\nu (m/s) : %.0lf\nh (m) : %.4lf",rad,u,h);
}