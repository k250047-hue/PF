#include<stdio.h>

int main(){

int r,n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
  for(i=0;n>0;){
    r = n%10;
    if(i ==0){
        i = r;
    }
    n = n/10;
    
  }
   i = i +r;
   printf("%d",i);



    return 0;
}