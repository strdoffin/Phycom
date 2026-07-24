#include <stdio.h>

int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if ( (a >= b) && (a <= c) || (a >= c) && ( a<=b)){
        printf("%.2lf",a);
    }else if ( (b >= a) && (b <= c) || (b >= c) && ( b<=a ) )
    {
        printf("%.2lf",b);
    }else{
        printf("%.2lf",c);
    }
    
    return 0;
}