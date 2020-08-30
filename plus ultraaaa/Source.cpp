#include<stdio.h>
int main()
{
	int x,a,b;
	int y = 0;
	printf("Enter a interger : ");
	scanf_s("%d", &x);
	
	while (x>0)
	{
		a = x % 10;
		y =y+a;
		x = x / 10;
	}
	
	if (y > 9)
	{	
		int z = 0;
		while (y > 0)
		{
			b = y % 10;
			z = z+b;
			y = y / 10;
		}
		printf("%d", z);
	}
	else
	{
		printf("%d", y);
	}
	return 0;
}