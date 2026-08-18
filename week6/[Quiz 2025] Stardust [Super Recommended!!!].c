#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a,const void *b){
    double x = *(double *)a;
    double y = *(double *)b;
    return (x > y) - (x < y);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    double data[n];
    double summ = 0, summdiff = 0;
    double mean = 0, median = 0, SD = 0;
    int swapped;
    double temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &data[i]);
        summ += data[i];
    }
    qsort(data, n , sizeof(double), cmp);
    if (n % 2 == 1)
    {
        median = data[n / 2];
    }
    else
    {
        int mid = ceil(n / 2);
        median = (data[mid] + data[mid - 1]) / 2;
    }
    mean = summ / n;
    for (int i = 0; i < n; i++)
    {
        summdiff += pow((data[i] - mean), 2.0);
    }
    SD = sqrt(summdiff / n);

    printf("%.2lf\n", mean);
    printf("%.2lf\n", median);
    printf("%.2lf\n", SD);
}