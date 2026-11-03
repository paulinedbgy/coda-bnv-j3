#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number;
	printf("choisissez un nombre entier : \n");
	scanf("%d", &number);
	if(number > 42)
	{
		printf("Votre nombre est supérieur à 42\n");
	}
	else if(number == 42)
	{
		printf("Votre nombre est égal à 42\n");
	}
	else
	{
		printf("Votre nombre est inférieur à 42\n");
	}
	exit(0);
}
