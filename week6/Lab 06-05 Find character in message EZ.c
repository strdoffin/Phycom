#include <stdio.h>

int main(){
    int pos[301] = {};
    int index = 0;
    int run = 0;
    int found = 0;
    char text[301];
    char fin;
    char target;
    scanf("%[^\n]",text);
    scanf(" %c",&fin);
    target = fin;
    if (target >= 'A' && target <= 'Z' ){
        target += 32;
    }
    while(text[run] != '\0'){
        if (text[run] >= 'A' && text[run] <= 'Z' ){
            text[run] += 32;
        }
        if (text[run] == target){
            found++;
            pos[index++] = run+1;
        }
        run++;
    }
    if (found != 0 ){
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ",found,fin);
        for (int i = 0; i < found; i++){
            if (i == found -1 ){
                printf("%d",pos[i]);
            }else{
                printf("%d, ",pos[i]);
            }
        }
    }else{
        printf("Not found.");
    }
    return 0;
}