#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    
    int *rev = (int *) malloc (num * sizeof(int));
    i = num - 1;
    for(int j = 0; j < num; j++){
        rev[j] = arr[i];
        i--;
    }
    
    free(arr);
    arr = rev;
    rev = NULL;
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
