#include <stdio.h>

int main()
{
	int n = 0, i;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		if(!(i % 15))
			printf("FizzBuzz\n");
		else if(!(i % 3))
			printf("Fizz\n");
		else if(!(i % 5))
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}	
	return 0;
}
