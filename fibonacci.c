#include <stdio.h>

int main()
{
	int n, a = 0, b = 1, c;
	printf("Please enter number: ");
	scanf("%d",&n);
	for(int num=0; num < n; num++ )
	{
		c = a + b;
		printf("%d",a);
		a = b;
		b = c;
	}
	return 0;
}
