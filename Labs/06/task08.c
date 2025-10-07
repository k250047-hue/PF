#include<stdio.h>

int main(){

int num;
for(int i=1;i<11;i++){
   printf("Enter a number: ");
   scanf("%d",&num); 
   if(num%7==0){
      printf("%d is divisible by 7\n",num);
   }
}




    return 0;
}