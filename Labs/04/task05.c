#include<stdio.h>

int main(){
	 
	 char sprinkles;
	 float total = 0;
	 printf("do you want to add sprinkles Y/N: ");
	 scanf("%c",&sprinkles);
	 
	 if (sprinkles == 'Y'){
	 	total+=0.75;
	    printf("sprinkle added\nTotal amount is $%.2f",total);
	 	
	 }else if (sprinkles == 'N'){
	   	total += 0.00;
	    printf("No sprinkle added\nTotal amount is $%.2f",total);
     
	 }else
	    printf("invalid");
	     
	
	
	
	
	
	
	
	return 0;
}
