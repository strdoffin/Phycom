#include <stdio.h>

int main(){
    double a[3][3];

    scanf("%lf %lf %lf",&a[0][0],&a[0][1],&a[0][2]);
    scanf("%lf %lf %lf",&a[1][0],&a[1][1],&a[1][2]);
    scanf("%lf %lf %lf",&a[2][0],&a[2][1],&a[2][2]);
    if (!(a[0][0] == a[1][1] && a[2][2])){
        printf("This is not a scalar matrix");
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        if (i == 0 || i == 4 || i == 8)
        continue;
        for (int j = 0; i < 3; i++)
        {
            if (a[i][j] != 0){
                printf("This is not a scalar matrix");
                return 0;
            }
        }
    }
    
    printf("This is a scalar matrix");
    
    
    
    return 0;
}