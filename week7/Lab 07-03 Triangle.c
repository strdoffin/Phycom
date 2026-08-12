#include <stdio.h>
#include <math.h>

void perimeter(double a, double b);
void area(double a, double b);

void perimeter(double a, double b){
    double c;
    c = sqrt(pow(a,2.0)+ pow(b,2.0));
    printf("Perimeter: %.2lf\n",c+a+b);
}

void area(double a, double b){
    printf("Area: %.2lf",(1/2.0)*a*b);
}

int main(){
    double a,b;
    scanf("%lf\n%lf",&a,&b);
    perimeter(a,b);
    area(a,b);
    return 0;
}