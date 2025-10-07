#include<stdio.h>

int main(){

int num1,num2,i,mul=0,div=0;
printf("enter num1: ");
scanf("%d",&num1);
printf("enter num2: ");
scanf("%d",&num2);

// for(i =1;i<=num1;i++){
//     mul+=num2;
// }
//   printf("%d",mul);

if(num1<num2) {printf("%d",div);
return 1;
}
else if(num2==0) {printf("division error");
return 1;
}
for(i =1;num1!=0 && num1>num2;i++){
  num1 =  num1 - num2;
}
   printf("%d",i);

    return 0;
}