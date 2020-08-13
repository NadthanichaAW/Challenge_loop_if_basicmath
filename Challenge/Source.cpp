#include <stdio.h>
#include <math.h>
int main()
{
	int x, y, count = 0, sul = 0;
	float sum = 0, aver = 0, sd, a, b, c, d;
	scanf_s("%d %d", &x, &y);
	if (x < y)
	{
		for (x = x; x <= y; x++)
		{
			printf("%d ", x);
			sum = sum + x;
			sul = sul + pow(x, 2);
			count++;
			aver = sum / count;
			a = (count * sul) - pow(sum, 2);
			b = count * (count - 1);
			sd = sqrt(a / b);
		}printf("\nAverage = %.2f", aver);
		printf("\nSD = %.2f", sd);
	}
	else if (y < x)
	{
		for (x = x; x >= y; x--)
		{
			printf("%d ", x);
			sum = sum + x;
			sul = sul + pow(x, 2);
			count++;
			aver = sum / count;
			a = (count * sul) - pow(sum, 2);
			b = count * (count - 1);
			sd = (sqrt(a / b));
		}printf("\nAverage = %.2f", aver);
		printf("\nSD = %.2f", sd);
	}
	return 0;
}