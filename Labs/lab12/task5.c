#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *str1 = NULL;    
    char *str2 = NULL;    
    char *str_combine = NULL;
    int i = 0 ;
    
    while (1){
      char temp  ;
      scanf("%c",&temp);
      if(temp =='\n') break;
      str1 = realloc(str1,sizeof(char)*(i+1));
      str1[i++] = temp;
    }

    int j =0 ;
    while (1){
      char temp  ;
      scanf("%c",&temp);
      if(temp =='\n') break;
      str2 = realloc(str2,sizeof(char)*(j+1));
      str2[j++] = temp;
    }

    str_combine  = malloc(sizeof(char)*(i+j));
    for (int k = 0; k < i; k++){
      str_combine[k] = str1[k];
    }
    for (int k = i,l=0; k < i+j; k++){
      str_combine[k] = str2[l++];
    }

    for (int k = 0; k < i+j; k++){
      printf("%c",str_combine[k]);
    }
    
    free(str_combine);
    free(str1);
    free(str2);
    
    return 0;
}