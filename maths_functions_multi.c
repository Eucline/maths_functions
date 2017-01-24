#include <stdio.h>

	int multi(int x, int y){
	return x * y;
}
int main()
{
	int x;
	int y;
	
	printf("Please enter a value: ");
	scanf("%i", &x);
	
	printf("Please enter a value: ");
	scanf("%i", &y);
	
	printf("The answer is: %i\n", multi(x, y));
	return 0;
	
}
