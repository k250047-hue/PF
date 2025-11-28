#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int *arr = calloc(4,sizeof(int));
    for (int i = 0; i < 4; i++){
      arr[i] = 2*(i+1);
    }
    printf("Allocated memory: ");
    for (int i = 0; i < 4; i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\n");
    free(arr);
    arr = malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++){
      arr[i] = 3*(i+1);
    }
    printf("Reused memory: ");
    for (int i = 0; i < 5; i++)
    {
      printf("%d ",arr[i]);
    }
    free(arr);
    
        
    return 0;
}