#include <stdio.h>

int main(){
    char text[101];
    int index;
    scanf("%[^\n]",text);
    scanf("%d",&index);
    printf("%.*s\n",index,text);
    return 0;
}