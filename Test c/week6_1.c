#include <stdio.h>

int ce103_fibonacciNumber(int fiIndex)

	{
		if (fiIndex <= 1)
			return fiIndex;
		return ce103_fibonacciNumber(fiIndex - 1) + ce103_fibonacciNumber(fiIndex - 2);
	}

	int main()
	{
		int fiIndex = 9;
		printf("%d", ce103_fibonacciNumber(fiIndex));
		getchar();
		return -1;
	}
