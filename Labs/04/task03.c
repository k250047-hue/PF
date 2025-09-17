
#include<stdio.h>

int main(){
	
	int scoop;
	float total;
	printf("how many scoop you want to order (1 2 or 3): ");
	scanf("%d",&scoop);
	
	if (scoop == 1){
	      total = 2.00;
		
	}
	else if(scoop == 2){
		  total = 3.50;

	}else if(scoop == 3){
	      total = 4.50;
    	
    }else{
	    printf("not available");
	return 1;
}   
	printf("you order %d scoop\ntotal amount is $%.2f",scoop,total);
	return 0;
}

