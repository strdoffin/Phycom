
#include <stdio.h>
#include <math.h>
int main(){
    double price,twoone,disco;
    int quantity,percent;
    scanf("%lf",&price);
    scanf("%d",&percent);
    scanf("%d",&quantity); //shift + alt arrowdown
    twoone = price * floor(quantity/3)*2+ (quantity%3*price);
    disco = quantity * price *( 1- (percent/100.0));
    
    if (twoone < disco){
        printf("Buy 2 Get 1\n");
        printf("%.2lf",twoone);
    }else{
        printf("Discount %d%%\n",percent);
        printf("%.2lf",disco);
    }
    return 0;
}