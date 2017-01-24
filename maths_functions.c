#include <stdio.h>

	int add(int x, int y){
	return x + y;
}
int main()
{
	int x;
	int y;
	
	printf("Please enter a value: ");
	scanf("%i", &x);
	
	printf("Please enter a value: ");
	scanf("%i", &y);
	
	printf("The answer is: %i\n", add(x, y));
	return 0;
	
}
