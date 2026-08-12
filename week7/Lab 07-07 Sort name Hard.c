#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int compare(const void *a, const void *b)
{
    const char *name1 = a;
    const char *name2 = b;

    int i = 0;

    while (name1[i] == name2[i] &&
           name1[i] != '\0' &&
           name2[i] != '\0')
    {
        i++;
    }

    if (name1[i] < name2[i])
        return -1;

    if (name1[i] > name2[i])
        return 1;

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    char (*list_name)[61] = malloc(n * sizeof(*list_name));

    if (list_name == NULL)
        return 1;

    for (int i = 0; i < n; i++)
    {
        scanf(" %60[^\n]", list_name[i]);

        int r = 0;

        while (list_name[i][r] != '\0')
        {
            if (r == 0 || list_name[i][r - 1] == ' ')
            {
                list_name[i][r] =
                    toupper((unsigned char)list_name[i][r]);
            }
            else
            {
                list_name[i][r] =
                    tolower((unsigned char)list_name[i][r]);
            }

            r++;
        }
    }

    qsort(list_name, n, sizeof(*list_name), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", list_name[i]);
    }

    free(list_name);

    return 0;
}