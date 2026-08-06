#include <stdio.h>

int find_index(char text[26],char x){
    
    for (int j = 0; j < 26; j++)
    {
        if (x == text[j])
        {
            return j;
        }
    }
    return 0;
}

int main(){
    char circle[26] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    char text[201];
    scanf("%[^\n]",text);
    int len = 0;
    while(text[len] != '\0')
        len++;
    for (int i = 0; i < len; i++)
    {
        // printf("%c",text[i]);
        int index = 0;
        if (text[i] >= 'A' && text[i] <= 'Z'){
            index = find_index("ABXYPQRMNCEDKLJOSHTUFVZGWI",text[i]);
            if (index + 5 > 25){
                index = (index + 5) % 26;
            }else{
                index+=5;
            }
            printf("%c","ABXYPQRMNCEDKLJOSHTUFVZGWI"[index]);
        }else if(text[i] >= 'a' && text[i] <= 'z'){
            index = find_index("abxypqrmncedkljoshtufvzgwi",text[i]);
            if (index + 5 > 25){
                index = (index + 5) % 26;
            }else{
                index+=5;
            }
            printf("%c","abxypqrmncedkljoshtufvzgwi"[index]);
        }else{
            printf("%c", text[i]);
        }
    }
    
    return 0;
}