#include <stdio.h>

int main(){
    float avg_age=0,avg_h=0,avg_w=0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    for(int i = 1; i <= 50;i++){
        int Age,Height,Weight;
        scanf("%d %d %d",&Age,&Height,&Weight);
        if (Age >= 20 && Height >= 160)
            c1+=1;
        if(Age < 20 && (Height <= 180 || Weight >= 60))
            c2+=1;
        if (Age >= 30 && (Weight >= 40 && Weight <= 80))
            c3+=1;
        if (Age < 40 && (Weight < 85 || Height <= 200))
            c4+=1;
        avg_age += Age/50.0;
        avg_h += Height/50.0;
        avg_w += Weight/50.0;
    }
    printf("Age >= 20 and Height >= 160: %d\nAge < 20 and Height <= 180 or Weight >= 60: %d\nAge >= 30 and Weight >= 40 and Weight <= 80: %d\nAge < 40 and Weight < 85 or Height <= 200: %d\nAverage Age: %d\nAverage Height: %.2f\nAverage Weight: %.2f",c1,c2,c3,c4,(int)avg_age,avg_h,avg_w);
    return 0;
}
