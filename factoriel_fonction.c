#include <stdio.h>
#include <stdlib.h>

int factorial(int N)
{
    int i, f;
    f = 1;
	for (i = 1; i <= N; i++)
	f = f * i;
	return f;
}
int main()
{
    int nbr;
    printf("veuillez saisire un nombre pour calculer le factoriel : \n");
	scanf("%d", &nbr);
	printf("le factoriel est \n %d! = %d", nbr, factorial(nbr));
	return 0;
}
