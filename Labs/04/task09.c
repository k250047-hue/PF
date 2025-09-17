#include<stdio.h>

int main(){

    int payment;
	float total;
     
    printf("payment method\n1.Card\n2.Cash\n");
    scanf("%d",&payment);
    
    if (payment == 1){
    	total += 0.50;
    	printf("you total is $%.2f",total);
    	
	}else if (payment == 2){
		printf("no charges");
		
	}else
	     printf("invalid");
	     
	     
    
    return 0;	
}
