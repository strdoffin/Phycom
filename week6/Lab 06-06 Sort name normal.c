#include <stdio.h>

int main(){
    char list_name [20][61] = {};
    for (int i = 0; i < 20; i++){
        char name[61];
        scanf(" %60[^\n]",name);  
        strcpy(list_name[i], name);
    }
    for (int i = 0; i < 20; i++)
        printf("%s\n",list_name[i]);
    
    return 0;
}