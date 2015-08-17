#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * LeerCadena(char linea[]);

void main()
{
    printf("El programa verifica si una palabra es palindroma\n\n");
	char linea[50];
	printf("\n\tIntroduce un texto: \n\n\t");
	printf("\n\tEl texto invertido es: %s \n",LeerCadena(linea));

	printf("\n");
	system("PAUSE");
}

char * LeerCadena(char linea[])
{
	char *s;
	fflush(stdin);
	gets(linea);
	s=strrev(linea);
	return s;
}
