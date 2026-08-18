#include <stdio.h>

int main(){
    char carname[200];
    int n,speed;
    int mile[15] = {};
    scanf("%[^\n]",carname);
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&mile[i]);
    }
    scanf("%d",&speed);
    printf("%s\n",carname);
    for (int i = 1; i <= n; i++)
    {
        if (speed > mile[i-1] && speed < mile[i]){
            printf("%d - %d",mile[i-1],mile[i]);
            break;
        }else if (speed > mile[i] && i + 1 == n){
            printf("> %d",mile[i]);
            break;
        }else if(speed == mile[i - 1]){
            if (i - 1 == 0){
                printf("%d - %d",mile[0],mile[i]);
                break;
            }else{
                printf("%d - %d",mile[i-2],mile[i-1]);
                break;
            }
        }
    }
    
}