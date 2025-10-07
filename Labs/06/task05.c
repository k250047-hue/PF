#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    if(n <= 0) {
        printf("Enter positive number");
        return 0;
    }
    printf("Fibonacci Series up to %d terms:", n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);   
        next = a + b;       
        a = b;             
        b = next;           
    }

    return 0;
}











