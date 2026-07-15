#include <stdio.h>

int main(){
    unsigned long long second;
    scanf("%llu",&second);
    printf("%llu s = %llu d ",second,second/3600/24);
    second %= 3600*24;
    printf("%llu h ",second/3600);
    second %= 3600;
    printf("%llu m ",second/60);
    second %= 60;
    printf("%llu s",second);
    return 0;
}