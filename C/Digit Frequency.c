#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    char *s = (char *)malloc(1024 * sizeof(char));
    scanf("%s", s);
    s = realloc(s, strlen(s) + 1);

    int count;
    for(int i = 0; i < 10; i++){
        count = 0;
        for(int j = 0; j < strlen(s); j++){
            if((s[j] - '0') == i)
                count++;
        }
        printf("%d ", count);
    }
                

    return 0;
}
