#include <stdio.h>

int main(){
    double a[3][3];
    double b[3][3];
    scanf("%lf %lf %lf",&a[0][0],&a[0][1],&a[0][2]);
    scanf("%lf %lf %lf",&a[1][0],&a[1][1],&a[1][2]);
    scanf("%lf %lf %lf",&a[2][0],&a[2][1],&a[2][2]);
    scanf("%lf %lf %lf",&b[0][0],&b[0][1],&b[0][2]);
    scanf("%lf %lf %lf",&b[1][0],&b[1][1],&b[1][2]);
    scanf("%lf %lf %lf",&b[2][0],&b[2][1],&b[2][2]);
    printf("A x B\n");
    double one = a[0][0]*b[0][0] + a[0][1]* b[1][0] + a[0][2]*b[2][0];
    double two = a[0][0]*b[0][1] + a[0][1]* b[1][1] + a[0][2]*b[2][1];
    double three = a[0][0]*b[0][2] + a[0][1]* b[1][2] + a[0][2]*b[2][2];
    
    double four = a[1][0]*b[0][0] + a[1][1]* b[1][0] + a[1][2]*b[2][0];
    double five = a[1][0]*b[0][1] + a[1][1]* b[1][1] + a[1][2]*b[2][1];
    double six = a[1][0]*b[0][2] + a[1][1]* b[1][2] + a[1][2]*b[2][2];
    
    double sev = a[2][0]*b[0][0] + a[2][1]* b[1][0] + a[2][2]*b[2][0];
    double eig = a[2][0]*b[0][1] + a[2][1]* b[1][1] + a[2][2]*b[2][1];
    double nine = a[2][0]*b[0][2] + a[2][1]* b[1][2] + a[2][2]*b[2][2];
    printf("%.2lf %.2lf %.2lf\n",one,two,three);
    printf("%.2lf %.2lf %.2lf\n",four,five,six);
    printf("%.2lf %.2lf %.2lf\n",sev,eig,nine);
    
    
    
    return 0;
}