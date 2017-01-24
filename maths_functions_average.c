#include <stdio.h>

	int div(int x, int y, int a, int b, int c){
	return 5 / (x + y + a + b + c);
}
int main()
{
	int x;
	int y;
	
	printf("Please enter a value: ");
	scanf("%i", &x);
	
	printf("Please enter a value: ");
	scanf("%i", &y);
	
	printf("Please enter a value: ");
	scanf("%i", &a);
	
	printf("Please enter a value: ");
	scanf("%i", &b);
	
	printf("Please enter a value: ");
	scanf("%i", &c);
	
	printf("The answer is: %i\n", div(x, y, a, b, c));
	return 0;
	 
}
