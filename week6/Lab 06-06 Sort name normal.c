#include <stdio.h>
#include <ctype.h>

int main(){
    int r;
    char list_name [20][61] = {};
    for (int i = 0; i < 20; i++){
        scanf(" %60[^\n]",list_name[i]);
        r = 0;
        while (list_name[i][r]!='\0')
        {
            if (r == 0 || list_name[i][r - 1] == ' '){
                list_name[i][r] = toupper(list_name[i][r]);
            }
            else
                list_name[i][r] = tolower(list_name[i][r]);
            r++;
        }
    }
    for (int k = 0; k < 19; k++)
    {
        for (int l = 0; l < 19 - k; l++)
        {
            int i = 0;
            while (list_name[l][i] == list_name[l + 1][i] && list_name[l][i] != '\0')
                i++;

            if (list_name[l][i] > list_name[l + 1][i])
            {
                char temp;
                for (int j = 0; j < 61; j++)
                {
                    temp = list_name[l][j];
                    list_name[l][j] = list_name[l + 1][j];
                    list_name[l + 1][j] = temp;
                }
            }
        }
    }
    
    for (int j = 0; j < 20; j++)
    {
        printf("%s\n",list_name[j]);
    }
    
    return 0;
}