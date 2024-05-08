#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {

  // This solution is given by Rohan Bari (the greatest programmer that ever lived!!!)
  // github.com/rohanbari
  
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int andResult = i & j;
            int orResult = i | j;
            int xorResult = i ^ j;

            if (andResult > maxAnd && andResult < k)
                maxAnd = andResult;
            if (orResult > maxOr && orResult < k)
                maxOr = orResult;
            if (xorResult > maxXor && xorResult < k)
                maxXor = xorResult;
        }
    }
    
    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
  
  
  // For some reason, the below code is not working in HackerRank, but working fine in my system
  
  // int andResult, orResult, xorResult;
  
  // for(int i = 1; i< n; i++){
  //       for(int j = i+1; j<=n; j++){
  //           if((i&j)<k)
  //               if(andResult<(i&j))
  //                   andResult = (i&j);

  //           if((i|j)<k)
  //               if(orResult<(i|j))
  //                   orResult = (i|j);

  //           if((i^j)<k)
  //               if(xorResult<(i^j))
  //                   xorResult = (i^j);
  //       }
  //   }
  //   printf("%d\n%d\n%d",andResult,orResult,xorResult);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
