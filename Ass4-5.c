#include<stdio.h>
int main()
{
	int n, x, y;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(x = 1; x <= n; x++)
	{
		for(y = 1; y <= x; y++)
		{
			printf("%c",'A'-1 + x);
		}
	printf("\n");
	}
	return 0;
}
