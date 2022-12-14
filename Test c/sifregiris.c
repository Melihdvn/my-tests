#include<stdio.h>
int main() {
	int pass, x = 1;

	while (x != 0)
	{
		printf("\nSifre girin: ");
		scanf("%d", &pass);

		if (pass == 5353)
		{
			printf("\nSifre dogru");
			x = 0;
		}
		else
		{
			printf("\nSifre yanlis,baska sifre deneyiniz:");
		}
		printf("\n");
	}
	return 0;
}
