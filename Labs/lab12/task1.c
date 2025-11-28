#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n  = 0;
    printf("enter size of integer: ");
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d",arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
      printf("%d\n",arr[i]);
    }
    free(arr);
    
    return 0;
}