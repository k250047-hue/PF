#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculate_factors (int n,int sum){
  if(n<9 && n>=0){
    return sum + n;
  }
  calculate_factors(n/10,sum+(n%10));
}


void get_digital_root(int n){
  printf("%d\n",n);
  if(n<9 &&n >=0){
      return;
  }
  get_digital_root(calculate_factors(n,0));
}

int main(void) {
    get_digital_root(9875);
    return 0;
}