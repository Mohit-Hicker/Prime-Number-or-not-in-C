#include<stdio.h>
int main(){
	int num,i=1, count = 0;  // Here num is a integer, it will taking input from user
  
	printf("Enter a number to check prime or not : ");
	scanf("%d", &num);
	while(i<=num) // (num != 0)
	{
		if(num%i==0){
			count++;
		}
		i++;
	}
	if(count==2)
		printf("%d is a prime number",num);
  else
	  printf("%d is not a prime number", num);
  
	return 0;
}
