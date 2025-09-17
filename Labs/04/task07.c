#include<stdio.h>

int main(){
	
	int age;
	float total = 10;
	printf("what is your age: ");
	scanf("%d",&age);
	
	
    if (age < 12) {
        total -= 1.00;
	    printf("after discount your amount is $%.2f",total);
	     
	}else
	    printf("no discount"); 
	
	
	
	
	
	
	
	
	
	
	return 0;
}
