#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *str = NULL;
    int len = 1;
    while (1){
      char current_word ;
      scanf("%c",&current_word);
      if(current_word=='\n'){
        break;
      }
      
      str = realloc(str,len*sizeof(char));
      str[(len++)-1] = current_word;
    }
    str = realloc(str,(len)*sizeof(char));
    str[len-1] = '\0';
    printf("Reversed String : ");
    for (int i = len-1; i >= 0 ; i--){
      printf("%c",str[i]);
    }
    free(str);
    
    return 0;
}