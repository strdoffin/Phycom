#include <stdio.h>

int main(){
    char name[21];
    char surname[21];
    char nickname[21];
    char id[9];

    scanf("%20s %20s",name,surname);
    scanf("%20s",nickname);
    scanf("%8s",id);
    printf("Hello World, my name is %s (%s)\n",nickname,name);
    printf("\n");
    printf("Student ID: %s\n",id);
    printf("Name: %s %s\n",name,surname);
    printf("Nickname: %s",nickname);
    return 0;
}