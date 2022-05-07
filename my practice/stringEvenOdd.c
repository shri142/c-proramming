#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s1[15];
    int n;
    //  scanf("%d",&n);
    int l = strlen(s1);

    scanf("%s", &s1);
    for (int i = 0; i < l; i++)
    {
        s1[i] = s1[l - 1];
         printf("%s", s1[i]);
        return 0;
    }

    return 0;
}
