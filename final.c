#include <stdio.h>

int main()
{
	char comando;
	int n1, n2, result;

	printf("Teste final de calc.\n");

	scanf("%c", &comando);

	if(comando == '+')
	{
		scanf("%d %d", &n1, &n2);

		result = n1 + n2;

		printf("%d", result);
		scanf("");
	}

	else if(comando == '-')
	{
		scanf("%d %d", &n1, &n2);

		result = n1 - n2;

		printf("%d", result);
		scanf("");
	}

	else if(comando == '*')
	{
		scanf("%d %d", &n1, &n2);

		result = n1 * n2;

		printf("%d", result);
		scanf("");
	}
	return 0;
}