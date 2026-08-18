#include <stdio.h>

int main(){
    char carA[51];
    char carB[51];
    int arr1[7];
    int arr2[7];
    int sumA = 0,sumB = 0,AB = 0,BA = 0,eq = 0;
    scanf("%50[^\n]",carA);
    scanf(" %d %d %d %d %d %d %d", &arr1[0],&arr1[1],&arr1[2],&arr1[3],&arr1[4],&arr1[5],&arr1[6]);
    scanf(" %50[^\n]",carB);
    scanf(" %d %d %d %d %d %d %d", &arr2[0],&arr2[1],&arr2[2],&arr2[3],&arr2[4],&arr2[5],&arr2[6]);
    for (int i = 0; i < 7; i++)
    {
        sumA+=arr1[i];
        sumB+=arr2[i];
        if (arr1[i] < arr2[i])
            AB += 1;
        else if(arr1[i] > arr2[i])
            BA += 1;
        else
            eq += 1;
    }
    printf("%s: %d minutes, average %d minutes/day\n",carA,sumA,sumA/7);
    printf("%s: %d minutes, average %d minutes/day\n",carB,sumB,sumB/7);
    printf("Faster days - %s: %d, %s: %d, Equal: %d",carA,AB,carB,BA,eq);
}