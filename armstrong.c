#include <stdio.h>
#include <math.h>

int main()
{
	int n, m=0, flag;
	printf("Please enter a number: ");
	scanf("%d",&n);
	
	int dummy = n;
	// check the number of digits
	for(dummy=n; dummy!=0;++m)
		dummy = dummy/10;

	//printf("%d",m);
	dummy =n;
	int ans = 0;
	while(dummy >0)
	{
		ans = ans + (pow((dummy % 10),m));
		dummy /= 10;
	}
	if (ans == n)
	{
		printf("This is a fibonacci number");
	}
	else
	{
		printf("This is not a fibonacci number");
	}
	return 0;
}
