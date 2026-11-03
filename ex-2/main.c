#include <stdlib.h>
#include <stdio.h>

int main()
{
	char operation;
	printf("choisissez une opération : +, -, *, /, %% :\n");
	scanf("%c", &operation);
	if(operation == '+')
	{
		printf("Vous avez choisi d'effectuer une addition\n");
	}
	else if(operation == '-')
	{
		printf("vous avez choisi d'effectuer une soustraction\n");
	}
	else if(operation == '*')
	{
		printf("vous avez choisi d'effectuer une multiplication\n");
	}
	else if(operation == '/')
	{
		printf("vous avez choisi d'effectuer une division\n");
	}
	else
	{
		printf("vous avez choisi d'effectuer un modulo\n");
	}
	exit(0);
}
