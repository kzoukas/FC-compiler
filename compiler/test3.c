#include "fclib.h"


 
 int i, k; 

int cube(int i)
 {
			return i * i * i;	
} 
 void add(int n,int k)
 {
	int j;
	 
		j = n + cube ( k );
		printf("%d\n", j);

	
} 
    


int main()
{
			scanf("%d",&k);
		scanf("%d",&i);
		add(k,i);		return 0;	
} 
