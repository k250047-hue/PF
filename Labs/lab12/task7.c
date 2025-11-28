#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    if (start >= end)
        return 1;

    if (str[start] != str[end])
        return 0;

    return isPalindrome(str, start + 1, end - 1);
}

int main(void) {
      printf("%d",isPalindrome("ABBA",0,3)); 
    return 0;
}