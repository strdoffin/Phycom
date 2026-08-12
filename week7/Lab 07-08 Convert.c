#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char a[102];
    char b[102];
    char c[102];
    char d[102];
    scanf("%[^\n]",a);
    scanf(" %[^\n]",b);
    strcpy(c, a);
    strcpy(d, b);
    int r =0;
    while (a[r] != '\0')
    {
        a[r] = tolower(a[r]);
        r++;
    }
    r = 0;
    while (b[r] != '\0')
    {
        b[r] = tolower(b[r]);
        r++;
    }
    r=0;
    while (c[r] != '\0')
    {
        if (c[r] >= 'a' && c[r]<='z')
            c[r] = toupper(c[r]);
        else if(c[r] >= 'A' && c[r]<='Z')
            c[r] = tolower(c[r]);
        r++;
    }
    r = 0;
    while (d[r] != '\0')
        {
            if (d[r] >= 'a' && d[r]<='z')
                d[r] = toupper(d[r]);
            else if(d[r] >= 'A' && d[r]<='Z')
                d[r] = tolower(d[r]);
        r++;
    }
    
    if(!strcmp(a,b)){
        printf("*** Results ***\n%s\n%s\n***************\nBoth strings are the same.",c,d);
    }else{
        printf("*** Results ***\n%s\n%s\n***************\nBoth strings are not the same.",c,d);
    }
    return 0;
}