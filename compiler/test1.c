#include "fclib.h"


 

int prime(int n)
 {
	int i;
	int isPrime,result;
	 
 
		if (n < 0){ 
	 result = prime ( -n );
 }else{
	 if (n < 2){ 
	 result = 0;
 }else{
	 if (n == 2){ 
	 result = 1;
 }else{
	 if (n % 2 == 0){ 
	 result = 0;
 }else{
	 		i = 3;
		isPrime = 1;
		while (isPrime && i <= n / 2){
	 		isPrime = (n % i != 0);
		i = i + 2;
		}
		result = isPrime;
	 	 }
  	 }
  	 }
  	 }
 		return result;	
} 
   


int main()
{
	int limit,number,counter=0;
	 
		scanf("%d",&limit);
		for (number=1; number <= 3; number=number + 1){
	 if (limit >= number){ 
	 		counter = counter + 1;
		printf("%d\n", number);

	 	} 
	}
		number = 6;
		while (number <= limit){
	 		if (prime ( number - 1 )){ 
	 		counter = counter + 1;
		printf("%d\n", number - 1);

	 	} 
		if ((number != limit) && prime ( number + 1 )){ 
	 		counter = counter + 1;
		printf("%d\n", number + 1);

	 	} 
		number = number + 6;
		}
		printf("%d\n", counter);

		return 0;	
} 
