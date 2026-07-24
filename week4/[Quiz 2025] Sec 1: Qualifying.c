#include <stdio.h>

int main(){
    double t2,t3;
    char n1[36],n2[36],n3[36];
    double ft;
    int npos;
    scanf("%lf %[^\n]",&ft,n1);
    npos =1;
    scanf("%lf %[^\n]",&t2,n2);
    if (t2 < ft){
        ft = t2;
        npos = 2;
    }
    scanf("%lf %[^\n]",&t3,n3);
    if (t3 < ft){
        ft = t3;
        npos = 3;
    }
    if (npos == 1){
        printf("%s ",n1);
    }else if (npos == 2){
        printf("%s ",n2);
    }else{
        printf("%s ",n3);
    }
    printf("is Fastest : %.3lf",ft);
    
    return 0;
}