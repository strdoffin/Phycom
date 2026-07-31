#include <stdio.h>

int main(){
    float b_acc;
    float b_wal;
    char mode;
    float value;
    int err=0;
    scanf("%f",&b_acc);
    scanf("%f",&b_wal);
    while (1)
    {
        scanf("%c %f",&mode,&value);
        if (mode == 'E')
            break;
        if (mode == 'D'){
            if (b_wal - value >= 0){
                b_acc += value;
                b_wal -= value;
                err =0;
                continue;
            }
            err +=1;
        }else if (mode == 'W')
        {
            if (b_acc - value >= 0){
                b_acc -= value;
                b_wal += value;
                err =0;
                continue;
            }
            err +=1;
        }
        if (err == 3){
            break;
        }
    }
    printf("%.2f\n",b_acc);
    printf("%.2f",b_wal);
}