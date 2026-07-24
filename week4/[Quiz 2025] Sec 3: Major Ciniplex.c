#include <stdio.h>

int main(){
    int age,date,price;
    scanf("%d",&age);
    scanf("%d",&date);
    if (date == 4){
        printf("Ticket price: 100 Baht");
        return 0;
    }
    if (age <= 12){
        price = 120;
    }else if (age >= 13 && age <= 59){
        price = 220;
    }else{
        price = 140;
    }
    
    if (date == 1 || date == 7){
        price += 20;
    }
    printf("Ticket price: %d Baht",price);
    
    return 0;
}