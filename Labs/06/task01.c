#include<stdio.h>

int main(){

int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Natural number from %d to 1: ",n);
   for(i=n;i>=1;i--){

       printf("%d ",i);
   }

    return 0;
}