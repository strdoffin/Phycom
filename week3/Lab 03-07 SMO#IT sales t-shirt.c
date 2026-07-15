#include <stdio.h>

int main(){
    double price;
    double percent;
    double quantity;
    scanf("%lf",&price);
    scanf("%lf",&percent);
    scanf("%lf",&quantity);
    printf("%.2lf",(price*(1-percent/100))*quantity);
    return 0;
}