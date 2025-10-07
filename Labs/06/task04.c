#include<stdio.h>

int main(){

int a=0,n,i;
printf("enter a number: ");
scanf("%d",&n);
 
for(i=2;i<=n-1;i++){
    if(n%i==0){
    a =1;
    break;
         }
}
if(n==1) printf("1 is not prime");
else if(a==0) printf("The number is prime");
else printf("The number is not prime");



    return 0;
}