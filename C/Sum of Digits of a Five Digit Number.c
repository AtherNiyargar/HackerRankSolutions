#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum;
    for (int i = 0; i < 5; i++)
    {
        sum += (n % 10);
        n /= 10;
    }
    printf("%d\n", sum);
    
    return 0;
}
