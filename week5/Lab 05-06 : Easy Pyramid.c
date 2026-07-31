#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    for(int i = 0;i<num ;i++){
        for(int j=i; j<num-1;j++){
            printf(" ");
        }
        for (int k = i; k < (i*3)+1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}