#include<stdio.h>

int main(){
	
	int day;
	float total = 100;
	printf("what day it is 1=Mon....7=Sun: ");
	scanf("%d",&day);
	
	if (day == 6 || day == 7) {;
        total = total - (0.1*total);
        printf("After discount your amount is $%.2f",total);
        
        
    }else 
	    printf("no discount");
	
	
	
	
	
	
	
	
	
	return 0;
}
