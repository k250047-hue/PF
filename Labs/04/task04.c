#include<stdio.h>

int main(){
	
	int cone;
	float total = 0;
	printf("choose the cone type:\n");
	printf("1. Regular Cone: +$0.50\n");
	printf("2. Waffle Cone: +$1.00\n");
	scanf("%d",&cone);
	
	if (cone == 1){
		total += 0.5;
		printf("you choose regular cone\nyour total amount is $%.2f",total);
		
	}else if(cone == 2){
		total += 1.00;
	    printf("you choose waffle cone\nyour total amount is $%.2f",total);
	    
    }else   
	    printf("invalid choice ");   
	
	
	
	
	
	
	
	
	
	return 0;
}
