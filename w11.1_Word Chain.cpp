#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char a[30030][1010];
int len, word, i;
int main()
{
    scanf("%d %d", &len, &word);
    for (i = 0; i < word; i++)
        scanf(" %s", a[i]);
    for (i = 0; i < word - 1; i++)
    {
        int count = 0;
        for (int k = 0; k < len; k++)
            if (a[i][k] != a[i + 1][k])
                count++;
        if (count > 2)
            break;
    }
    printf("%s", a[i]);
    return 0;
}