#include <stdio.h>
int main() 
{
	int digit, i, j, num[100], temp, zeroCheck = 0;
	scanf_s("%d", &digit);
	for (i = 0; i < digit; i++) 
	{
		scanf_s("%d", &num[i]);
	}
	for (i = 0; i < digit; i++) 
	{
		for (j = i; j < digit; j++) 
		{
			if (num[i] > num[j]) 
			{
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}
	for (i = 0; i < digit; i++)
	{
		if (num[i] == 0) 
		{
			zeroCheck++;
		}
	}
	printf("%d", num[zeroCheck]);
	for (i = 0; i < zeroCheck; i++)
	{
		printf("0");
	}
	for (i = zeroCheck + 1; i < digit; i++)
	{
		printf("%d", num[i]);
	}
	return 0;
}