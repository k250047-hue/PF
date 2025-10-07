#include<stdio.h>

int main(){

int fact=1,n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
for(i=1;i<=n;i++){
    fact= fact*i;
}
  printf("%d",fact);

  
    return 0;
}