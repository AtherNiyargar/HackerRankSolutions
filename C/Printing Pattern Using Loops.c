#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// I know this program is a mess, but at atleast it works 👍

void after(int, int);

void recur(int n, int count)
{
    for (int j = n, i = 0; i < count; j--, i++)
        printf("%d ", j + count);

    for (int i = 0; i < n * 2 - 1; i++)
        printf("%d ", n);

    for (int j = n, i = 0; i < count; j++, i++)
        printf("%d ", j + 1);

    putchar('\n');

    if (n == 1)
        return;

    recur(n - 1, count + 1);
}


int main(){
    int n;
    scanf("%d", &n);

    recur(n, 0);
    after(n, 2);

    return 0;
}

void after(int n, int count){
    for(int i = n; i > count; i--)
        printf("%d ", i);

    for(int i = 1; i < (count*2); i++)
        printf("%d ", count);

    for(int i = count + 1; i <= n; i++)
        printf("%d ", i);
    
    putchar('\n');

    if(n == count)
        return;

    after(n, count+1);
}
