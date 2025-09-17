#include<stdio.h>

int main(){
	
	int scoop,cone;
	 
	printf("how many scoop you order: ");
	scanf("%d",&scoop);
	printf("which type of cone you order:\n1.waffle\n2.Regular\n ");
	scanf("%d",&cone);
	
	if (scoop == 3 & cone == 1) {
        printf("You got a free topping.",scoop,cone);
        
    }else 
	    printf("you got nothing");
	
	
 return 0;	
}
