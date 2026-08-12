#include <stdio.h>

int mantis(int a);

int mantis(int a){
    if (a == 1)
        return 1;
    if (a == 2)
        return 2;
    return mantis(a - 1) + mantis(a - 2);
}

int main(){
    int n;

    scanf("%d", &n);

    printf("method = %d", mantis(n));

    return 0;
}