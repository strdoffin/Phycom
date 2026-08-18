#include <stdio.h>

int main(){
    double e20;
    int road[4];
    double oil[4];
    double fuel,cost;
    double express =0;
    double romklao =0;
    double c1 = 0;
    double c2 = 0;
    scanf("%lf",&e20);
    scanf("%d %d %d %d", &road[0],&road[1],&road[2],&road[3]);
    scanf("%lf %lf %lf %lf", &oil[0],&oil[1],&oil[2],&oil[3]);
    for (int i = 0; i < 4; i++)
    {
        if (road[i] == 1){
            if (oil[i] > 0){
                fuel = 29.0 / oil[i];
            }else{
                fuel = 0;
            }
            cost = (fuel * e20) + 60;
            express+=cost;
            c1++;
            printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n",i+1,fuel,cost);
        }else if (road[i] == 0){
            if (oil[i] > 0){
                fuel = 25.0 / oil[i];
            }else{
                fuel = 0;
            }
            cost = fuel * e20;
            romklao += cost;
            c2++;
            printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n",i+1,fuel,cost);
        }
    }
    if (c1 > 0){
        printf("Expressway: %.2lf Baht\n",express/c1);
    }else{
        printf("Expressway: %.2lf Baht\n",0.00);
    }
    if (c2 > 0){
        printf("Romklao: %.2lf Baht",romklao/c2);
    }else{
        printf("Romklao: %.2lf Baht",0.00);
    }
}