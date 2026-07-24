#include <stdio.h>

int main(){
    double safe, time , lab , safetycar;
    scanf("%lf",&safe);
    scanf("%lf",&time);
    scanf("%lf",&lab);
    scanf("%lf",&safetycar);

    int a = !(safe == 1);
    int b = !(time < 1);
    int c = !(lab > 2);
    int d = !(lab >= safetycar + 2);
    if ( a +b +c +d > 0){
        printf("DRS not allowed %d",a+b+c+d);
    }else{
        printf("DRS allowed");
    }
    return 0;
}