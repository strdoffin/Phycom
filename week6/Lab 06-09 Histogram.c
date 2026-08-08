#include <stdio.h>

int main(){
    char alpha[26] = {};
    int data[26] = {};
    int n;
    int r = 0;
    int state =0;
    char temp;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c",&temp);
        if (temp >= 'A' && temp <= 'Z' && state == 0)
            temp += 32;
        for (int j = 0; j < r; j++)
        {
            if (alpha[j] == temp){   
                state = 1;
                data[j]+=1;
                break;
            }
        }
        if (temp >= 'a' && temp <= 'z' && state == 0)
        {
            alpha[r] = temp;
            data[r] += 1;
            r++;
        }
        state = 0;
    }
    for (int i = 0; i < r; i++)
    {
        printf("%c: %d\n",alpha[i],data[i]);
    }
    
    
}