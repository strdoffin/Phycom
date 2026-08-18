#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char name[3][7];
    char text[16];
    int toggle =0;  
    int i = 0, run = 0,c =0;
    double fuel[3] = {0,0,0};
    double one ,two, three;
    int n;
    scanf("%d",&n);
    scanf(" %15[^\n]",text);
    
    while (text[i] != '\0')
    {
        if (text[i] == ' '){
            name[c][run] = '\0';
            run = 0;
            c++;
        }else{
            name[c][run] = text[i];
            run++;
        }
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        scanf(" %lf %lf %lf",&one,&two,&three);
        fuel[0]+=one;
        fuel[1]+=two;
        fuel[2]+=three;
    }
    

    for (int i = 0; i < 3; i++)
    {
        if (name[i][0] == 'N'){
            printf("%s: %.0lf refills\n",name[i],ceil(fuel[i]/6.6));
        } else{
            printf("%s: %.0lf refills\n",name[i],ceil(fuel[i]/5.5));
        }
    }
    return 0;
}