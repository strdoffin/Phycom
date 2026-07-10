#include <stdio.h>

int main(){
    char text[13] = "Hello, world";
    printf("123456789012345678901234567890\n");
    printf("%s*\n",text); //2
    printf("%20s*\n",text); //3
    printf("%.20s*\n",text); //4
    printf("%-20s*\n",text);//5
    printf("%.10s*\n",text);//6
    printf("%-10s*\n",text);//7
    printf("%25.10s*\n",text);//8
    printf("%25.5s*\n",text);//9
    printf("%-25.10s*\n",text);//10
    return 0;
}